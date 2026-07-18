FUN_00747948:
00747948  56                        PUSH ESI
00747949  8B 74 24 08               MOV ESI,dword ptr [ESP + 0x8]
0074794D  57                        PUSH EDI
0074794E  8D 46 10                  LEA EAX,[ESI + 0x10]
00747951  50                        PUSH EAX
00747952  FF 15 70 BC 85 00         CALL dword ptr [0x0085bc70]
00747958  8B F8                     MOV EDI,EAX
0074795A  85 FF                     TEST EDI,EDI
0074795C  75 0D                     JNZ 0x0074796b
0074795E  85 F6                     TEST ESI,ESI
00747960  74 09                     JZ 0x0074796b
00747962  8B 06                     MOV EAX,dword ptr [ESI]
00747964  6A 01                     PUSH 0x1
00747966  8B CE                     MOV ECX,ESI
00747968  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
LAB_0074796b:
0074796B  8B C7                     MOV EAX,EDI
0074796D  5F                        POP EDI
0074796E  5E                        POP ESI
0074796F  C2 04 00                  RET 0x4
