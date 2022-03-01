import speedtest

test = speedtest.Speedtest()

print("Loading Server List...")
test.get_servers() # To get the list of Servers

print("Choosing Best Server")
best = test.get_best_server() # Choosing best server
# print(best) # Gives about the best server information

print(f"Found: {best['host']} located in {best['country']}")

print("Performing Download Test")
downloadResult = test.download()

print("Performing Upload Test")
uploadResult = test.upload()

pingResult = test.results.ping

print(f"Download Speed: {downloadResult / 1024 / 1024:.2f} MB/s")
print(f"Upload Speed: {uploadResult / 1024 / 1024:.2f} MB/s")
print(f"Ping: {pingResult:.2f} ms")