FUN_0074f683:
0074F683  56                        PUSH ESI
0074F684  8B 74 24 08               MOV ESI,dword ptr [ESP + 0x8]
0074F688  FF 76 38                  PUSH dword ptr [ESI + 0x38]
0074F68B  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074F691  DD 44 24 0C               FLD double ptr [ESP + 0xc]
0074F695  DC 0D 00 1C 7A 00         FMUL double ptr [0x007a1c00]
0074F69B  E8 E8 EB FD FF            CALL 0x0072e288
0074F6A0  89 46 28                  MOV dword ptr [ESI + 0x28],EAX
0074F6A3  89 56 2C                  MOV dword ptr [ESI + 0x2c],EDX
0074F6A6  FF 76 38                  PUSH dword ptr [ESI + 0x38]
0074F6A9  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074F6AF  8B 06                     MOV EAX,dword ptr [ESI]
0074F6B1  8B CE                     MOV ECX,ESI
0074F6B3  FF 50 4C                  CALL dword ptr [EAX + 0x4c]
0074F6B6  5E                        POP ESI
0074F6B7  C2 0C 00                  RET 0xc
