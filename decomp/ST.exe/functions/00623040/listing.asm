FUN_00623040:
00623040  55                        PUSH EBP
00623041  8B EC                     MOV EBP,ESP
00623043  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00623046  8B 48 60                  MOV ECX,dword ptr [EAX + 0x60]
00623049  8B 49 29                  MOV ECX,dword ptr [ECX + 0x29]
0062304C  85 C9                     TEST ECX,ECX
0062304E  0F 84 D3 00 00 00         JZ 0x00623127
00623054  8B 50 70                  MOV EDX,dword ptr [EAX + 0x70]
00623057  8B 14 91                  MOV EDX,dword ptr [ECX + EDX*0x4]
0062305A  85 D2                     TEST EDX,EDX
0062305C  0F 84 C5 00 00 00         JZ 0x00623127
00623062  53                        PUSH EBX
00623063  8A 58 4F                  MOV BL,byte ptr [EAX + 0x4f]
00623066  84 DB                     TEST BL,BL
00623068  5B                        POP EBX
00623069  74 5A                     JZ 0x006230c5
0062306B  DB 40 6C                  FILD dword ptr [EAX + 0x6c]
0062306E  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00623071  51                        PUSH ECX
00623072  6A 20                     PUSH 0x20
00623074  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0062307A  6A 20                     PUSH 0x20
0062307C  51                        PUSH ECX
0062307D  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00623083  D9 1C 24                  FSTP float ptr [ESP]
00623086  DB 40 68                  FILD dword ptr [EAX + 0x68]
00623089  51                        PUSH ECX
0062308A  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00623090  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00623096  D8 25 A8 07 79 00         FSUB float ptr [0x007907a8]
0062309C  D9 1C 24                  FSTP float ptr [ESP]
0062309F  DB 40 64                  FILD dword ptr [EAX + 0x64]
006230A2  51                        PUSH ECX
006230A3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006230A6  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006230AC  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006230B2  D8 25 A8 07 79 00         FSUB float ptr [0x007907a8]
006230B8  D9 1C 24                  FSTP float ptr [ESP]
006230BB  52                        PUSH EDX
006230BC  E8 5C 0D DE FF            CALL 0x00403e1d
006230C1  5D                        POP EBP
006230C2  C2 10 00                  RET 0x10
LAB_006230c5:
006230C5  DB 40 6C                  FILD dword ptr [EAX + 0x6c]
006230C8  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006230CB  52                        PUSH EDX
006230CC  6A 20                     PUSH 0x20
006230CE  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006230D4  6A 20                     PUSH 0x20
006230D6  51                        PUSH ECX
006230D7  33 D2                     XOR EDX,EDX
006230D9  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006230DF  8A 50 78                  MOV DL,byte ptr [EAX + 0x78]
006230E2  D9 1C 24                  FSTP float ptr [ESP]
006230E5  DB 40 68                  FILD dword ptr [EAX + 0x68]
006230E8  51                        PUSH ECX
006230E9  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006230EF  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006230F5  D8 25 A8 07 79 00         FSUB float ptr [0x007907a8]
006230FB  D9 1C 24                  FSTP float ptr [ESP]
006230FE  DB 40 64                  FILD dword ptr [EAX + 0x64]
00623101  8B 04 91                  MOV EAX,dword ptr [ECX + EDX*0x4]
00623104  51                        PUSH ECX
00623105  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00623108  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0062310E  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00623114  D8 25 A8 07 79 00         FSUB float ptr [0x007907a8]
0062311A  D9 1C 24                  FSTP float ptr [ESP]
0062311D  50                        PUSH EAX
0062311E  E8 FA 0C DE FF            CALL 0x00403e1d
00623123  5D                        POP EBP
00623124  C2 10 00                  RET 0x10
LAB_00623127:
00623127  B8 FC FF FF FF            MOV EAX,0xfffffffc
0062312C  5D                        POP EBP
0062312D  C2 10 00                  RET 0x10
