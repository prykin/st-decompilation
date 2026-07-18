FUN_00550430:
00550430  55                        PUSH EBP
00550431  8B EC                     MOV EBP,ESP
00550433  53                        PUSH EBX
00550434  56                        PUSH ESI
00550435  57                        PUSH EDI
00550436  8B F9                     MOV EDI,ECX
00550438  33 C9                     XOR ECX,ECX
0055043A  33 C0                     XOR EAX,EAX
0055043C  8A 0D AF 8A 80 00         MOV CL,byte ptr [0x00808aaf]
00550442  85 C9                     TEST ECX,ECX
00550444  76 72                     JBE 0x005504b8
00550446  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00550449  BE B0 8A 80 00            MOV ESI,0x808ab0
LAB_0055044e:
0055044E  39 5E 40                  CMP dword ptr [ESI + 0x40],EBX
00550451  74 12                     JZ 0x00550465
00550453  40                        INC EAX
00550454  81 C6 9C 00 00 00         ADD ESI,0x9c
0055045A  3B C1                     CMP EAX,ECX
0055045C  72 F0                     JC 0x0055044e
0055045E  5F                        POP EDI
0055045F  5E                        POP ESI
00550460  5B                        POP EBX
00550461  5D                        POP EBP
00550462  C2 08 00                  RET 0x8
LAB_00550465:
00550465  B9 20 76 80 00            MOV ECX,0x807620
0055046A  E8 41 4D 19 00            CALL 0x006e51b0
0055046F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00550472  89 46 48                  MOV dword ptr [ESI + 0x48],EAX
00550475  33 C0                     XOR EAX,EAX
00550477  3B C8                     CMP ECX,EAX
00550479  74 3D                     JZ 0x005504b8
0055047B  39 05 88 87 80 00         CMP dword ptr [0x00808788],EAX
00550481  74 35                     JZ 0x005504b8
00550483  39 9F F4 00 00 00         CMP dword ptr [EDI + 0xf4],EBX
00550489  75 2D                     JNZ 0x005504b8
0055048B  89 87 F4 00 00 00         MOV dword ptr [EDI + 0xf4],EAX
00550491  A3 88 87 80 00            MOV [0x00808788],EAX
00550496  C7 87 D0 00 00 00 06 A1 00 00  MOV dword ptr [EDI + 0xd0],0xa106
005504A0  81 C7 C0 00 00 00         ADD EDI,0xc0
005504A6  57                        PUSH EDI
005504A7  68 01 01 00 00            PUSH 0x101
005504AC  6A 03                     PUSH 0x3
005504AE  B9 20 76 80 00            MOV ECX,0x807620
005504B3  E8 18 39 19 00            CALL 0x006e3dd0
LAB_005504b8:
005504B8  5F                        POP EDI
005504B9  5E                        POP ESI
005504BA  5B                        POP EBX
005504BB  5D                        POP EBP
005504BC  C2 08 00                  RET 0x8
