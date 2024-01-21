import cv2
from PIL import Image

image = cv2.imread('input.jpg', cv2.IMREAD_GRAYSCALE)

#define a threshold
thresh = 110

# threshold the image
image = cv2.threshold(image, thresh, 255, cv2.THRESH_BINARY)[1]

#convert nparray data
image = Image.fromarray(image)
image = image.convert("RGBA")

pixdata = image.load()

width, height = image.size
for y in range(height):
  for x in range(width):
    if pixdata[x, y] == (255, 255, 255, 255): #transparent
      pixdata[x, y] = (255, 255, 255, 0)

image.save("output.png", "PNG")
