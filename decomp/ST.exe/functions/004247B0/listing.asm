STGroupC::SetAVPar:
004247B0  55                        PUSH EBP
004247B1  8B EC                     MOV EBP,ESP
004247B3  51                        PUSH ECX
004247B4  53                        PUSH EBX
004247B5  57                        PUSH EDI
004247B6  8B F9                     MOV EDI,ECX
004247B8  33 DB                     XOR EBX,EBX
004247BA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004247BD  8B 47 29                  MOV EAX,dword ptr [EDI + 0x29]
004247C0  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
004247C3  89 4F 39                  MOV dword ptr [EDI + 0x39],ECX
004247C6  85 C0                     TEST EAX,EAX
004247C8  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004247CB  0F 86 94 00 00 00         JBE 0x00424865
004247D1  56                        PUSH ESI
004247D2  33 D2                     XOR EDX,EDX
LAB_004247d4:
004247D4  8B 4F 29                  MOV ECX,dword ptr [EDI + 0x29]
004247D7  8D 45 08                  LEA EAX,[EBP + 0x8]
004247DA  50                        PUSH EAX
004247DB  E8 90 84 28 00            CALL 0x006acc70
004247E0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004247E3  66 3D FF FF               CMP AX,0xffff
004247E7  74 67                     JZ 0x00424850
004247E9  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
004247EC  6A 01                     PUSH 0x1
004247EE  50                        PUSH EAX
004247EF  51                        PUSH ECX
004247F0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004247F6  E8 BF E0 FD FF            CALL 0x004028ba
004247FB  8B F0                     MOV ESI,EAX
004247FD  85 F6                     TEST ESI,ESI
004247FF  75 3E                     JNZ 0x0042483f
00424801  68 A4 51 7A 00            PUSH 0x7a51a4
00424806  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042480B  50                        PUSH EAX
0042480C  50                        PUSH EAX
0042480D  68 56 02 00 00            PUSH 0x256
00424812  68 A4 50 7A 00            PUSH 0x7a50a4
00424817  E8 B4 8C 28 00            CALL 0x006ad4d0
0042481C  83 C4 18                  ADD ESP,0x18
0042481F  85 C0                     TEST EAX,EAX
00424821  74 01                     JZ 0x00424824
00424823  CC                        INT3
LAB_00424824:
00424824  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0042482A  68 57 02 00 00            PUSH 0x257
0042482F  68 A4 50 7A 00            PUSH 0x7a50a4
00424834  52                        PUSH EDX
00424835  68 04 00 FE AF            PUSH 0xaffe0004
0042483A  E8 01 16 28 00            CALL 0x006a5e40
LAB_0042483f:
0042483F  83 7E 20 14               CMP dword ptr [ESI + 0x20],0x14
00424843  75 0B                     JNZ 0x00424850
00424845  8B 47 39                  MOV EAX,dword ptr [EDI + 0x39]
00424848  8B CE                     MOV ECX,ESI
0042484A  50                        PUSH EAX
0042484B  E8 D6 D3 FD FF            CALL 0x00401c26
LAB_00424850:
00424850  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00424853  43                        INC EBX
00424854  8B D3                     MOV EDX,EBX
00424856  81 E2 FF FF 00 00         AND EDX,0xffff
0042485C  3B D0                     CMP EDX,EAX
0042485E  0F 82 70 FF FF FF         JC 0x004247d4
00424864  5E                        POP ESI
LAB_00424865:
00424865  5F                        POP EDI
00424866  5B                        POP EBX
00424867  8B E5                     MOV ESP,EBP
00424869  5D                        POP EBP
0042486A  C2 04 00                  RET 0x4
