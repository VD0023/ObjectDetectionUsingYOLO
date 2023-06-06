#Rectangle/square
import cv2
import numpy as np

#500,500-lemght n width and 3 is channel number (rgb)
#no.zeros will create black image - value is 0
img = np.zeros((500,500,3))


cv2.rectangle(img,(200,200),(400,400),(0,0,255),5)
#image source ,st point,end point,(0,0,225)-BGR
#5- line thickness

cv2.imshow('RECTANGLE',img)

cv2.waitKey(0)
cv2.destroyAllWindows()

