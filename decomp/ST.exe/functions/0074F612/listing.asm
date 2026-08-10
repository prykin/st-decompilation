FUN_0074f612:
0074F612  56                        PUSH ESI
0074F613  8B 74 24 08               MOV ESI,dword ptr [ESP + 0x8]
0074F617  FF 76 38                  PUSH dword ptr [ESI + 0x38]
0074F61A  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074F620  DD 44 24 0C               FLD double ptr [ESP + 0xc]
0074F624  DC 0D 00 1C 7A 00         FMUL double ptr [0x007a1c00]
0074F62A  E8 59 EC FD FF            CALL 0x0072e288
0074F62F  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
0074F632  89 56 24                  MOV dword ptr [ESI + 0x24],EDX
0074F635  FF 76 38                  PUSH dword ptr [ESI + 0x38]
0074F638  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074F63E  8B 06                     MOV EAX,dword ptr [ESI]
0074F640  8B CE                     MOV ECX,ESI
0074F642  FF 50 48                  CALL dword ptr [EAX + 0x48]
0074F645  5E                        POP ESI
0074F646  C2 0C 00                  RET 0xc
