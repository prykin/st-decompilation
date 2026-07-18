FUN_00748186:
00748186  57                        PUSH EDI
00748187  8B 7C 24 0C               MOV EDI,dword ptr [ESP + 0xc]
0074818B  85 FF                     TEST EDI,EDI
0074818D  75 07                     JNZ 0x00748196
0074818F  B8 03 40 00 80            MOV EAX,0x80004003
00748194  EB 47                     JMP 0x007481dd
LAB_00748196:
00748196  56                        PUSH ESI
00748197  8B 74 24 0C               MOV ESI,dword ptr [ESP + 0xc]
0074819B  8B 46 64                  MOV EAX,dword ptr [ESI + 0x64]
0074819E  85 C0                     TEST EAX,EAX
007481A0  74 05                     JZ 0x007481a7
007481A2  83 C0 0C                  ADD EAX,0xc
007481A5  EB 02                     JMP 0x007481a9
LAB_007481a7:
007481A7  33 C0                     XOR EAX,EAX
LAB_007481a9:
007481A9  89 07                     MOV dword ptr [EDI],EAX
007481AB  8B 46 64                  MOV EAX,dword ptr [ESI + 0x64]
007481AE  85 C0                     TEST EAX,EAX
007481B0  74 0A                     JZ 0x007481bc
007481B2  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
007481B5  83 C0 0C                  ADD EAX,0xc
007481B8  50                        PUSH EAX
007481B9  FF 51 04                  CALL dword ptr [ECX + 0x4]
LAB_007481bc:
007481BC  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
007481BF  85 C0                     TEST EAX,EAX
007481C1  74 0C                     JZ 0x007481cf
007481C3  50                        PUSH EAX
007481C4  8D 47 08                  LEA EAX,[EDI + 0x8]
007481C7  50                        PUSH EAX
007481C8  E8 B3 53 00 00            CALL 0x0074d580
007481CD  EB 05                     JMP 0x007481d4
LAB_007481cf:
007481CF  66 83 67 08 00            AND word ptr [EDI + 0x8],0x0
LAB_007481d4:
007481D4  8B 46 58                  MOV EAX,dword ptr [ESI + 0x58]
007481D7  5E                        POP ESI
007481D8  89 47 04                  MOV dword ptr [EDI + 0x4],EAX
007481DB  33 C0                     XOR EAX,EAX
LAB_007481dd:
007481DD  5F                        POP EDI
007481DE  C2 08 00                  RET 0x8
