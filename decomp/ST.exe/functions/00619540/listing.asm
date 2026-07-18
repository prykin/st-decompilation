FUN_00619540:
00619540  55                        PUSH EBP
00619541  8B EC                     MOV EBP,ESP
00619543  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00619546  8B 48 4E                  MOV ECX,dword ptr [EAX + 0x4e]
00619549  8B 49 29                  MOV ECX,dword ptr [ECX + 0x29]
0061954C  85 C9                     TEST ECX,ECX
0061954E  74 64                     JZ 0x006195b4
00619550  8B 50 5E                  MOV EDX,dword ptr [EAX + 0x5e]
00619553  8B 0C 91                  MOV ECX,dword ptr [ECX + EDX*0x4]
00619556  85 C9                     TEST ECX,ECX
00619558  74 5A                     JZ 0x006195b4
0061955A  DB 40 5A                  FILD dword ptr [EAX + 0x5a]
0061955D  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00619560  52                        PUSH EDX
00619561  6A 20                     PUSH 0x20
00619563  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00619569  6A 20                     PUSH 0x20
0061956B  51                        PUSH ECX
0061956C  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00619572  D9 1C 24                  FSTP float ptr [ESP]
00619575  DB 40 56                  FILD dword ptr [EAX + 0x56]
00619578  51                        PUSH ECX
00619579  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0061957F  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00619585  D8 25 A8 07 79 00         FSUB float ptr [0x007907a8]
0061958B  D9 1C 24                  FSTP float ptr [ESP]
0061958E  DB 40 52                  FILD dword ptr [EAX + 0x52]
00619591  51                        PUSH ECX
00619592  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00619598  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0061959E  D8 25 A8 07 79 00         FSUB float ptr [0x007907a8]
006195A4  D9 1C 24                  FSTP float ptr [ESP]
006195A7  51                        PUSH ECX
006195A8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006195AB  E8 6D A8 DE FF            CALL 0x00403e1d
006195B0  5D                        POP EBP
006195B1  C2 10 00                  RET 0x10
LAB_006195b4:
006195B4  B8 FC FF FF FF            MOV EAX,0xfffffffc
006195B9  5D                        POP EBP
006195BA  C2 10 00                  RET 0x10
