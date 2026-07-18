FUN_007326b0:
007326B0  55                        PUSH EBP
007326B1  8B EC                     MOV EBP,ESP
007326B3  51                        PUSH ECX
007326B4  A1 BC A5 85 00            MOV EAX,[0x0085a5bc]
007326B9  3B 05 A0 A5 85 00         CMP EAX,dword ptr [0x0085a5a0]
007326BF  75 4A                     JNZ 0x0073270b
007326C1  8B 0D A0 A5 85 00         MOV ECX,dword ptr [0x0085a5a0]
007326C7  83 C1 10                  ADD ECX,0x10
007326CA  6B C9 14                  IMUL ECX,ECX,0x14
007326CD  51                        PUSH ECX
007326CE  8B 15 C0 A5 85 00         MOV EDX,dword ptr [0x0085a5c0]
007326D4  52                        PUSH EDX
007326D5  6A 00                     PUSH 0x0
007326D7  A1 C4 A5 85 00            MOV EAX,[0x0085a5c4]
007326DC  50                        PUSH EAX
007326DD  FF 15 D0 BB 85 00         CALL dword ptr [0x0085bbd0]
007326E3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007326E6  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
007326EA  75 07                     JNZ 0x007326f3
007326EC  33 C0                     XOR EAX,EAX
007326EE  E9 C8 00 00 00            JMP 0x007327bb
LAB_007326f3:
007326F3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007326F6  89 0D C0 A5 85 00         MOV dword ptr [0x0085a5c0],ECX
007326FC  8B 15 A0 A5 85 00         MOV EDX,dword ptr [0x0085a5a0]
00732702  83 C2 10                  ADD EDX,0x10
00732705  89 15 A0 A5 85 00         MOV dword ptr [0x0085a5a0],EDX
LAB_0073270b:
0073270B  A1 BC A5 85 00            MOV EAX,[0x0085a5bc]
00732710  6B C0 14                  IMUL EAX,EAX,0x14
00732713  8B 0D C0 A5 85 00         MOV ECX,dword ptr [0x0085a5c0]
00732719  03 C8                     ADD ECX,EAX
0073271B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0073271E  68 C4 41 00 00            PUSH 0x41c4
00732723  6A 08                     PUSH 0x8
00732725  8B 15 C4 A5 85 00         MOV EDX,dword ptr [0x0085a5c4]
0073272B  52                        PUSH EDX
0073272C  FF 15 A8 BC 85 00         CALL dword ptr [0x0085bca8]
00732732  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00732735  89 41 10                  MOV dword ptr [ECX + 0x10],EAX
00732738  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073273B  83 7A 10 00               CMP dword ptr [EDX + 0x10],0x0
0073273F  75 04                     JNZ 0x00732745
00732741  33 C0                     XOR EAX,EAX
00732743  EB 76                     JMP 0x007327bb
LAB_00732745:
00732745  6A 04                     PUSH 0x4
00732747  68 00 20 00 00            PUSH 0x2000
0073274C  68 00 00 10 00            PUSH 0x100000
00732751  6A 00                     PUSH 0x0
00732753  FF 15 E4 BB 85 00         CALL dword ptr [0x0085bbe4]
00732759  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073275C  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
0073275F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00732762  83 7A 0C 00               CMP dword ptr [EDX + 0xc],0x0
00732766  75 1A                     JNZ 0x00732782
00732768  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073276B  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
0073276E  51                        PUSH ECX
0073276F  6A 00                     PUSH 0x0
00732771  8B 15 C4 A5 85 00         MOV EDX,dword ptr [0x0085a5c4]
00732777  52                        PUSH EDX
00732778  FF 15 D4 BB 85 00         CALL dword ptr [0x0085bbd4]
0073277E  33 C0                     XOR EAX,EAX
00732780  EB 39                     JMP 0x007327bb
LAB_00732782:
00732782  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00732785  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
0073278B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073278E  C7 41 04 00 00 00 00      MOV dword ptr [ECX + 0x4],0x0
00732795  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00732798  C7 42 08 FF FF FF FF      MOV dword ptr [EDX + 0x8],0xffffffff
0073279F  A1 BC A5 85 00            MOV EAX,[0x0085a5bc]
007327A4  83 C0 01                  ADD EAX,0x1
007327A7  A3 BC A5 85 00            MOV [0x0085a5bc],EAX
007327AC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007327AF  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
007327B2  C7 02 FF FF FF FF         MOV dword ptr [EDX],0xffffffff
007327B8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_007327bb:
007327BB  8B E5                     MOV ESP,EBP
007327BD  5D                        POP EBP
007327BE  C3                        RET
