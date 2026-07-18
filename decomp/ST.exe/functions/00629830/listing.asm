FUN_00629830:
00629830  8A 41 14                  MOV AL,byte ptr [ECX + 0x14]
00629833  C7 81 B2 00 00 00 00 00 00 00  MOV dword ptr [ECX + 0xb2],0x0
0062983D  3C 04                     CMP AL,0x4
0062983F  C6 81 BF 00 00 00 01      MOV byte ptr [ECX + 0xbf],0x1
00629846  73 0C                     JNC 0x00629854
00629848  C7 81 BA 00 00 00 25 00 00 00  MOV dword ptr [ECX + 0xba],0x25
00629852  EB 0A                     JMP 0x0062985e
LAB_00629854:
00629854  C7 81 BA 00 00 00 23 00 00 00  MOV dword ptr [ECX + 0xba],0x23
LAB_0062985e:
0062985E  8B 89 C6 00 00 00         MOV ECX,dword ptr [ECX + 0xc6]
00629864  85 C9                     TEST ECX,ECX
00629866  7C 12                     JL 0x0062987a
00629868  6A 00                     PUSH 0x0
0062986A  6A 00                     PUSH 0x0
0062986C  6A 00                     PUSH 0x0
0062986E  51                        PUSH ECX
0062986F  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00629875  E8 A6 FC 0B 00            CALL 0x006e9520
LAB_0062987a:
0062987A  C3                        RET
