import time
import psutil

lastRec = psutil.net_io_counters().bytes_recv
lastSent = psutil.net_io_counters().bytes_sent
lastTotal = lastRec + lastSent

while True:
    bytesRec = psutil.net_io_counters().bytes_recv
    bytesSent = psutil.net_io_counters().bytes_sent
    bytesTotal = bytesRec + bytesSent

    newRec = bytesRec - lastRec
    newSent = bytesSent - lastSent
    newTotal = bytesTotal - lastTotal

    mbRec = newRec / 1024 / 1024
    mbSent = newSent / 1024 / 1024
    mbTotal = newTotal / 1024 / 1024

    print(f"{mbRec:.2f} MB Received, {mbSent:.2f} MB Sent, {mbTotal:.2f} MB Total")

    lastRec = bytesRec
    lastSent = bytesSent
    lastTotal = bytesTotal

    time.sleep(2)