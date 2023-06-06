#1. Read the file(Image)
import cv2
img = cv2.imread('abc.jpg')
cv2.imshow('ORIGINAL IMAGE',img)
cv2.waitkey(0)
cv2.destroyAllWindows()
