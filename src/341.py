#!/usr/bin/env python3

S = input()

cnt = 0
ans = 0
for s in S:
  if s == "…":
    cnt += 1
    ans = max(ans, cnt)
  else:
    cnt = 0

print(ans)
