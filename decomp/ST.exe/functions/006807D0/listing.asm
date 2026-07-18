FUN_006807d0:
006807D0  55                        PUSH EBP
006807D1  8B EC                     MOV EBP,ESP
006807D3  81 EC 00 04 00 00         SUB ESP,0x400
006807D9  56                        PUSH ESI
006807DA  E8 97 50 D8 FF            CALL 0x00405876
006807DF  A1 18 76 80 00            MOV EAX,[0x00807618]
006807E4  50                        PUSH EAX
006807E5  68 59 1B 00 00            PUSH 0x1b59
006807EA  E8 51 F9 02 00            CALL 0x006b0140
006807EF  50                        PUSH EAX
006807F0  E8 50 27 D8 FF            CALL 0x00402f45
006807F5  8B 0D 0C 8A 84 00         MOV ECX,dword ptr [0x00848a0c]
006807FB  8B 15 10 8A 84 00         MOV EDX,dword ptr [0x00848a10]
00680801  A1 18 76 80 00            MOV EAX,[0x00807618]
00680806  83 C4 04                  ADD ESP,0x4
00680809  51                        PUSH ECX
0068080A  52                        PUSH EDX
0068080B  50                        PUSH EAX
0068080C  68 5B 1B 00 00            PUSH 0x1b5b
00680811  E8 2A F9 02 00            CALL 0x006b0140
00680816  8D 8D 00 FC FF FF         LEA ECX,[EBP + 0xfffffc00]
0068081C  50                        PUSH EAX
0068081D  51                        PUSH ECX
0068081E  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00680824  8D 95 00 FC FF FF         LEA EDX,[EBP + 0xfffffc00]
0068082A  52                        PUSH EDX
0068082B  E8 15 27 D8 FF            CALL 0x00402f45
00680830  83 C4 14                  ADD ESP,0x14
00680833  E8 7E 24 D8 FF            CALL 0x00402cb6
00680838  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0068083B  8B 06                     MOV EAX,dword ptr [ESI]
0068083D  85 C0                     TEST EAX,EAX
0068083F  74 09                     JZ 0x0068084a
00680841  50                        PUSH EAX
00680842  E8 29 09 07 00            CALL 0x006f1170
00680847  83 C4 04                  ADD ESP,0x4
LAB_0068084a:
0068084A  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
00680850  5E                        POP ESI
00680851  8B E5                     MOV ESP,EBP
00680853  5D                        POP EBP
00680854  C3                        RET
