import cv2
img = cv2.imread('abc.jpg')
gray = cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
cv2.imshow('ORIGINAL IMAGE',img)
cv2.imshow('GREY SCALE IMAGE',gray)
cv2.waitKey(0)
cv2.destroyAllWindows()
