FUN_0073e2c0:
0073E2C0  55                        PUSH EBP
0073E2C1  8B EC                     MOV EBP,ESP
0073E2C3  51                        PUSH ECX
0073E2C4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073E2C7  3B 05 DC A2 85 00         CMP EAX,dword ptr [0x0085a2dc]
0073E2CD  73 1F                     JNC 0x0073e2ee
0073E2CF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073E2D2  C1 F9 05                  SAR ECX,0x5
0073E2D5  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073E2D8  83 E2 1F                  AND EDX,0x1f
0073E2DB  8B 04 8D A0 A1 85 00      MOV EAX,dword ptr [ECX*0x4 + 0x85a1a0]
0073E2E2  0F BE 4C D0 04            MOVSX ECX,byte ptr [EAX + EDX*0x8 + 0x4]
0073E2E7  83 E1 01                  AND ECX,0x1
0073E2EA  85 C9                     TEST ECX,ECX
0073E2EC  75 0F                     JNZ 0x0073e2fd
LAB_0073e2ee:
0073E2EE  C7 05 48 71 85 00 09 00 00 00  MOV dword ptr [0x00857148],0x9
0073E2F8  83 C8 FF                  OR EAX,0xffffffff
0073E2FB  EB 6D                     JMP 0x0073e36a
LAB_0073e2fd:
0073E2FD  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073E300  C1 FA 05                  SAR EDX,0x5
0073E303  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073E306  83 E0 1F                  AND EAX,0x1f
0073E309  8B 0C 95 A0 A1 85 00      MOV ECX,dword ptr [EDX*0x4 + 0x85a1a0]
0073E310  0F BE 54 C1 04            MOVSX EDX,byte ptr [ECX + EAX*0x8 + 0x4]
0073E315  83 E2 01                  AND EDX,0x1
0073E318  85 D2                     TEST EDX,EDX
0073E31A  74 3A                     JZ 0x0073e356
0073E31C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073E31F  50                        PUSH EAX
0073E320  E8 0B 2C 00 00            CALL 0x00740f30
0073E325  83 C4 04                  ADD ESP,0x4
0073E328  50                        PUSH EAX
0073E329  FF 15 B0 BB 85 00         CALL dword ptr [0x0085bbb0]
0073E32F  85 C0                     TEST EAX,EAX
0073E331  75 0B                     JNZ 0x0073e33e
0073E333  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
0073E339  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0073E33C  EB 07                     JMP 0x0073e345
LAB_0073e33e:
0073E33E  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_0073e345:
0073E345  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
0073E349  75 02                     JNZ 0x0073e34d
0073E34B  EB 1A                     JMP 0x0073e367
LAB_0073e34d:
0073E34D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073E350  89 0D 4C 71 85 00         MOV dword ptr [0x0085714c],ECX
LAB_0073e356:
0073E356  C7 05 48 71 85 00 09 00 00 00  MOV dword ptr [0x00857148],0x9
0073E360  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
LAB_0073e367:
0073E367  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0073e36a:
0073E36A  8B E5                     MOV ESP,EBP
0073E36C  5D                        POP EBP
0073E36D  C3                        RET
