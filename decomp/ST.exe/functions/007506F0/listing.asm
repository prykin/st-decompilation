FUN_007506f0:
007506F0  55                        PUSH EBP
007506F1  8B EC                     MOV EBP,ESP
007506F3  6A FF                     PUSH -0x1
007506F5  68 38 1E 7A 00            PUSH 0x7a1e38
007506FA  68 64 D9 72 00            PUSH 0x72d964
007506FF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
00750705  50                        PUSH EAX
00750706  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0075070D  83 EC 54                  SUB ESP,0x54
00750710  53                        PUSH EBX
00750711  56                        PUSH ESI
00750712  57                        PUSH EDI
00750713  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00750716  33 DB                     XOR EBX,EBX
00750718  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
0075071B  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
0075071E  3B FB                     CMP EDI,EBX
00750720  0F 8E 7F 01 00 00         JLE 0x007508a5
00750726  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
00750729  3B D3                     CMP EDX,EBX
0075072B  0F 8E 74 01 00 00         JLE 0x007508a5
00750731  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00750734  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00750737  25 00 11 00 00            AND EAX,0x1100
0075073C  3D 00 01 00 00            CMP EAX,0x100
00750741  0F 84 8D 01 00 00         JZ 0x007508d4
00750747  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0075074A  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
0075074D  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00750750  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
00750753  03 CF                     ADD ECX,EDI
00750755  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
00750758  03 C2                     ADD EAX,EDX
0075075A  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0075075D  89 5D AC                  MOV dword ptr [EBP + -0x54],EBX
00750760  89 5D B0                  MOV dword ptr [EBP + -0x50],EBX
00750763  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00750766  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
00750769  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0075076C  8D 55 CC                  LEA EDX,[EBP + -0x34]
0075076F  52                        PUSH EDX
00750770  8D 45 AC                  LEA EAX,[EBP + -0x54]
00750773  50                        PUSH EAX
00750774  8D 4D 9C                  LEA ECX,[EBP + -0x64]
00750777  51                        PUSH ECX
00750778  FF 15 50 BE 85 00         CALL dword ptr [0x0085be50]
0075077E  85 C0                     TEST EAX,EAX
00750780  0F 84 1F 01 00 00         JZ 0x007508a5
00750786  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
00750789  8B C2                     MOV EAX,EDX
0075078B  2B 45 CC                  SUB EAX,dword ptr [EBP + -0x34]
0075078E  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00750791  03 C8                     ADD ECX,EAX
00750793  8B 7D A0                  MOV EDI,dword ptr [EBP + -0x60]
00750796  8B C7                     MOV EAX,EDI
00750798  2B 45 D0                  SUB EAX,dword ptr [EBP + -0x30]
0075079B  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0075079E  03 D8                     ADD EBX,EAX
007507A0  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
007507A3  03 C1                     ADD EAX,ECX
007507A5  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
007507A8  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
007507AB  03 CB                     ADD ECX,EBX
007507AD  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
007507B0  8B 5D A4                  MOV EBX,dword ptr [EBP + -0x5c]
007507B3  2B DA                     SUB EBX,EDX
007507B5  03 D8                     ADD EBX,EAX
007507B7  89 5D D4                  MOV dword ptr [EBP + -0x2c],EBX
007507BA  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
007507BD  2B D7                     SUB EDX,EDI
007507BF  03 D1                     ADD EDX,ECX
007507C1  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
007507C4  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
007507C7  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
007507CA  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
007507CD  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
007507D0  8D 55 CC                  LEA EDX,[EBP + -0x34]
007507D3  52                        PUSH EDX
007507D4  8D 45 AC                  LEA EAX,[EBP + -0x54]
007507D7  50                        PUSH EAX
007507D8  8D 4D BC                  LEA ECX,[EBP + -0x44]
007507DB  51                        PUSH ECX
007507DC  FF 15 50 BE 85 00         CALL dword ptr [0x0085be50]
007507E2  85 C0                     TEST EAX,EAX
007507E4  0F 84 BB 00 00 00         JZ 0x007508a5
007507EA  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
007507ED  8B D0                     MOV EDX,EAX
007507EF  2B 55 CC                  SUB EDX,dword ptr [EBP + -0x34]
007507F2  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
007507F5  03 CA                     ADD ECX,EDX
007507F7  89 4D 9C                  MOV dword ptr [EBP + -0x64],ECX
007507FA  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
007507FD  8B FA                     MOV EDI,EDX
007507FF  2B 7D D0                  SUB EDI,dword ptr [EBP + -0x30]
00750802  01 7D A0                  ADD dword ptr [EBP + -0x60],EDI
00750805  8B 7D C4                  MOV EDI,dword ptr [EBP + -0x3c]
00750808  2B F8                     SUB EDI,EAX
0075080A  8B 5D C8                  MOV EBX,dword ptr [EBP + -0x38]
0075080D  2B DA                     SUB EBX,EDX
0075080F  03 CF                     ADD ECX,EDI
00750811  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
00750814  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
00750817  03 C3                     ADD EAX,EBX
00750819  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
0075081C  56                        PUSH ESI
0075081D  E8 8E B0 F6 FF            CALL 0x006bb8b0
00750822  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00750825  85 C0                     TEST EAX,EAX
00750827  75 67                     JNZ 0x00750890
00750829  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
0075082C  0F AF 45 18               IMUL EAX,dword ptr [EBP + 0x18]
00750830  03 45 9C                  ADD EAX,dword ptr [EBP + -0x64]
00750833  8B 96 78 04 00 00         MOV EDX,dword ptr [ESI + 0x478]
00750839  8B CA                     MOV ECX,EDX
0075083B  0F AF 4D C0               IMUL ECX,dword ptr [EBP + -0x40]
0075083F  03 4D BC                  ADD ECX,dword ptr [EBP + -0x44]
00750842  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00750849  53                        PUSH EBX
0075084A  57                        PUSH EDI
0075084B  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
0075084E  57                        PUSH EDI
0075084F  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
00750852  03 C7                     ADD EAX,EDI
00750854  50                        PUSH EAX
00750855  52                        PUSH EDX
00750856  8B 96 74 04 00 00         MOV EDX,dword ptr [ESI + 0x474]
0075085C  03 D1                     ADD EDX,ECX
0075085E  52                        PUSH EDX
0075085F  E8 FC E1 F7 FF            CALL 0x006cea60
00750864  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0075086B  EB 1A                     JMP 0x00750887
LAB_00750887:
00750887  56                        PUSH ESI
00750888  E8 F3 B0 F6 FF            CALL 0x006bb980
0075088D  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
LAB_00750890:
00750890  3D A0 00 76 88            CMP EAX,0x887600a0
00750895  74 07                     JZ 0x0075089e
00750897  3D AE 01 76 88            CMP EAX,0x887601ae
0075089C  75 07                     JNZ 0x007508a5
LAB_0075089e:
0075089E  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
LAB_007508a5:
007508A5  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
007508A8  85 F6                     TEST ESI,ESI
007508AA  74 28                     JZ 0x007508d4
007508AC  6A 49                     PUSH 0x49
007508AE  68 B4 2A 7F 00            PUSH 0x7f2ab4
007508B3  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
007508B8  50                        PUSH EAX
007508B9  56                        PUSH ESI
007508BA  E8 81 55 F5 FF            CALL 0x006a5e40
007508BF  8B C6                     MOV EAX,ESI
007508C1  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
007508C4  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
007508CB  5F                        POP EDI
007508CC  5E                        POP ESI
007508CD  5B                        POP EBX
007508CE  8B E5                     MOV ESP,EBP
007508D0  5D                        POP EBP
007508D1  C2 24 00                  RET 0x24
LAB_007508d4:
007508D4  33 C0                     XOR EAX,EAX
007508D6  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
007508D9  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
007508E0  5F                        POP EDI
007508E1  5E                        POP ESI
007508E2  5B                        POP EBX
007508E3  8B E5                     MOV ESP,EBP
007508E5  5D                        POP EBP
007508E6  C2 24 00                  RET 0x24
