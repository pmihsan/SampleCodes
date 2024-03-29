import sys, pygame

pygame.init()

size = width, height = 1000, 600

speed = [1, 1]

background = 215, 225, 235

screen = pygame.display.set_mode(size)

pygame.display.set_caption("Bouncing ball Sample")

ball = pygame.image.load("ball.png")

ballrect = ball.get_rect()

while 1:

    for event in pygame.event.get():

        if event.type == pygame.QUIT:

            sys.exit()

    ballrect = ballrect.move(speed)

    if ballrect.left < 0 or ballrect.right > width:

        speed[0] = -speed[0]

    if ballrect.top < 0 or ballrect.bottom > height:

        speed[1] = -speed[1]

    screen.fill(background)

    screen.blit(ball, ballrect)

    pygame.display.flip()
