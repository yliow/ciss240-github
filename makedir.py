import datetime, os
today = datetime.datetime.now()
y = str(today.year).zfill(2)
m = str(today.month).zfill(2)
d = str(today.day).zfill(2)
dirname = '%s-%s-%s' % (y, m, d)
os.system('mkdir %s' % dirname)
