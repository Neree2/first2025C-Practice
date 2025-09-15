def leaky_relu(x,a):
  if x>=0:
    return x
  else:
    return a*x
