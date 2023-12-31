run:
	python makedir.py
	git add .; git commit -m"no msg"; git push

c:
	rm -rf *-*-*
	git add .; git commit -m"no msg"; git push
