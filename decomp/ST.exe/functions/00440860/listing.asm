FUN_00440860:
00440860  55                        PUSH EBP
00440861  8B EC                     MOV EBP,ESP
00440863  51                        PUSH ECX
00440864  53                        PUSH EBX
00440865  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00440868  56                        PUSH ESI
00440869  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0044086C  57                        PUSH EDI
0044086D  6A 01                     PUSH 0x1
0044086F  53                        PUSH EBX
00440870  8B F9                     MOV EDI,ECX
00440872  56                        PUSH ESI
00440873  E8 42 20 FC FF            CALL 0x004028ba
00440878  85 C0                     TEST EAX,EAX
0044087A  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0044087D  75 3D                     JNZ 0x004408bc
0044087F  68 00 80 7A 00            PUSH 0x7a8000
00440884  68 CC 4C 7A 00            PUSH 0x7a4ccc
00440889  50                        PUSH EAX
0044088A  50                        PUSH EAX
0044088B  68 D0 21 00 00            PUSH 0x21d0
00440890  68 04 60 7A 00            PUSH 0x7a6004
00440895  E8 36 CC 26 00            CALL 0x006ad4d0
0044089A  83 C4 18                  ADD ESP,0x18
0044089D  85 C0                     TEST EAX,EAX
0044089F  74 01                     JZ 0x004408a2
004408A1  CC                        INT3
LAB_004408a2:
004408A2  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004408A7  68 D1 21 00 00            PUSH 0x21d1
004408AC  68 04 60 7A 00            PUSH 0x7a6004
004408B1  50                        PUSH EAX
004408B2  68 04 00 FE AF            PUSH 0xaffe0004
004408B7  E8 84 55 26 00            CALL 0x006a5e40
LAB_004408bc:
004408BC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004408BF  53                        PUSH EBX
004408C0  83 F8 01                  CMP EAX,0x1
004408C3  56                        PUSH ESI
004408C4  8B CF                     MOV ECX,EDI
004408C6  75 0A                     JNZ 0x004408d2
004408C8  E8 0D 32 FC FF            CALL 0x00403ada
004408CD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004408D0  EB 08                     JMP 0x004408da
LAB_004408d2:
004408D2  E8 71 1E FC FF            CALL 0x00402748
004408D7  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_004408da:
004408DA  83 F8 01                  CMP EAX,0x1
004408DD  75 5C                     JNZ 0x0044093b
004408DF  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
004408E2  8D 14 CE                  LEA EDX,[ESI + ECX*0x8]
004408E5  8D 0C 56                  LEA ECX,[ESI + EDX*0x2]
004408E8  C1 E1 04                  SHL ECX,0x4
004408EB  03 CE                     ADD ECX,ESI
004408ED  8B 3C 4D 25 4E 7F 00      MOV EDI,dword ptr [ECX*0x2 + 0x7f4e25]
004408F4  85 FF                     TEST EDI,EDI
004408F6  74 43                     JZ 0x0044093b
004408F8  8B 5F 0C                  MOV EBX,dword ptr [EDI + 0xc]
004408FB  85 DB                     TEST EBX,EBX
004408FD  76 3C                     JBE 0x0044093b
004408FF  33 F6                     XOR ESI,ESI
00440901  85 DB                     TEST EBX,EBX
00440903  7E 36                     JLE 0x0044093b
LAB_00440905:
00440905  8D 55 0C                  LEA EDX,[EBP + 0xc]
00440908  8B CF                     MOV ECX,EDI
0044090A  52                        PUSH EDX
0044090B  8B D6                     MOV EDX,ESI
0044090D  E8 5E C3 26 00            CALL 0x006acc70
00440912  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00440915  85 C9                     TEST ECX,ECX
00440917  74 1A                     JZ 0x00440933
00440919  8B 01                     MOV EAX,dword ptr [ECX]
0044091B  FF 50 0C                  CALL dword ptr [EAX + 0xc]
0044091E  83 F8 08                  CMP EAX,0x8
00440921  75 10                     JNZ 0x00440933
00440923  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00440926  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00440929  50                        PUSH EAX
0044092A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0044092D  8B 11                     MOV EDX,dword ptr [ECX]
0044092F  50                        PUSH EAX
00440930  FF 52 10                  CALL dword ptr [EDX + 0x10]
LAB_00440933:
00440933  46                        INC ESI
00440934  3B F3                     CMP ESI,EBX
00440936  7C CD                     JL 0x00440905
00440938  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0044093b:
0044093B  5F                        POP EDI
0044093C  5E                        POP ESI
0044093D  5B                        POP EBX
0044093E  8B E5                     MOV ESP,EBP
00440940  5D                        POP EBP
00440941  C2 0C 00                  RET 0xc
