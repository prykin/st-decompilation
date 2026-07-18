FUN_0074767f:
0074767F  56                        PUSH ESI
00747680  8B 74 24 08               MOV ESI,dword ptr [ESP + 0x8]
00747684  57                        PUSH EDI
00747685  8D 46 14                  LEA EAX,[ESI + 0x14]
00747688  50                        PUSH EAX
00747689  FF 15 70 BC 85 00         CALL dword ptr [0x0085bc70]
0074768F  8B F8                     MOV EDI,EAX
00747691  85 FF                     TEST EDI,EDI
00747693  75 0D                     JNZ 0x007476a2
00747695  85 F6                     TEST ESI,ESI
00747697  74 09                     JZ 0x007476a2
00747699  8B 06                     MOV EAX,dword ptr [ESI]
0074769B  6A 01                     PUSH 0x1
0074769D  8B CE                     MOV ECX,ESI
0074769F  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
LAB_007476a2:
007476A2  8B C7                     MOV EAX,EDI
007476A4  5F                        POP EDI
007476A5  5E                        POP ESI
007476A6  C2 04 00                  RET 0x4
