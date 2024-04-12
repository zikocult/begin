#git clean -ndX | awk '{ print substr ($0, 14) }'
git ls-files --others -i --exclude-standard
