FUN_0070b6d0:
0070B6D0  55                        PUSH EBP
0070B6D1  8B EC                     MOV EBP,ESP
0070B6D3  81 EC 00 01 00 00         SUB ESP,0x100
0070B6D9  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0070B6DC  8D 85 00 FF FF FF         LEA EAX,[EBP + 0xffffff00]
0070B6E2  50                        PUSH EAX
0070B6E3  6A 00                     PUSH 0x0
0070B6E5  6A 00                     PUSH 0x0
0070B6E7  6A 00                     PUSH 0x0
0070B6E9  51                        PUSH ECX
0070B6EA  E8 41 30 02 00            CALL 0x0072e730
0070B6EF  8D 95 00 FF FF FF         LEA EDX,[EBP + 0xffffff00]
0070B6F5  68 D0 00 7F 00            PUSH 0x7f00d0
0070B6FA  52                        PUSH EDX
0070B6FB  E8 20 2F 02 00            CALL 0x0072e620
0070B700  83 C4 1C                  ADD ESP,0x1c
0070B703  85 C0                     TEST EAX,EAX
0070B705  75 04                     JNZ 0x0070b70b
0070B707  8B E5                     MOV ESP,EBP
0070B709  5D                        POP EBP
0070B70A  C3                        RET
LAB_0070b70b:
0070B70B  8D 85 00 FF FF FF         LEA EAX,[EBP + 0xffffff00]
0070B711  68 C8 00 7F 00            PUSH 0x7f00c8
0070B716  50                        PUSH EAX
0070B717  E8 04 2F 02 00            CALL 0x0072e620
0070B71C  83 C4 08                  ADD ESP,0x8
0070B71F  85 C0                     TEST EAX,EAX
0070B721  75 09                     JNZ 0x0070b72c
0070B723  B8 02 00 00 00            MOV EAX,0x2
0070B728  8B E5                     MOV ESP,EBP
0070B72A  5D                        POP EBP
0070B72B  C3                        RET
LAB_0070b72c:
0070B72C  8D 8D 00 FF FF FF         LEA ECX,[EBP + 0xffffff00]
0070B732  68 C0 00 7F 00            PUSH 0x7f00c0
0070B737  51                        PUSH ECX
0070B738  E8 E3 2E 02 00            CALL 0x0072e620
0070B73D  83 C4 08                  ADD ESP,0x8
0070B740  85 C0                     TEST EAX,EAX
0070B742  75 09                     JNZ 0x0070b74d
0070B744  B8 01 00 00 00            MOV EAX,0x1
0070B749  8B E5                     MOV ESP,EBP
0070B74B  5D                        POP EBP
0070B74C  C3                        RET
LAB_0070b74d:
0070B74D  8D 95 00 FF FF FF         LEA EDX,[EBP + 0xffffff00]
0070B753  68 B8 00 7F 00            PUSH 0x7f00b8
0070B758  52                        PUSH EDX
0070B759  E8 C2 2E 02 00            CALL 0x0072e620
0070B75E  83 C4 08                  ADD ESP,0x8
0070B761  F7 D8                     NEG EAX
0070B763  1B C0                     SBB EAX,EAX
0070B765  24 FC                     AND AL,0xfc
0070B767  83 C0 03                  ADD EAX,0x3
0070B76A  8B E5                     MOV ESP,EBP
0070B76C  5D                        POP EBP
0070B76D  C3                        RET
