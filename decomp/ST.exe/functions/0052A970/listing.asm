FUN_0052a970:
0052A970  55                        PUSH EBP
0052A971  8B EC                     MOV EBP,ESP
0052A973  56                        PUSH ESI
0052A974  57                        PUSH EDI
0052A975  BF A0 16 80 00            MOV EDI,0x8016a0
0052A97A  83 C9 FF                  OR ECX,0xffffffff
0052A97D  33 C0                     XOR EAX,EAX
0052A97F  F2 AE                     SCASB.REPNE ES:EDI
0052A981  F7 D1                     NOT ECX
0052A983  2B F9                     SUB EDI,ECX
0052A985  8B C1                     MOV EAX,ECX
0052A987  8B F7                     MOV ESI,EDI
0052A989  BF A4 16 80 00            MOV EDI,0x8016a4
0052A98E  C1 E9 02                  SHR ECX,0x2
0052A991  F3 A5                     MOVSD.REP ES:EDI,ESI
0052A993  8B C8                     MOV ECX,EAX
0052A995  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0052A998  83 E1 03                  AND ECX,0x3
0052A99B  85 C0                     TEST EAX,EAX
0052A99D  F3 A4                     MOVSB.REP ES:EDI,ESI
0052A99F  0F 84 30 01 00 00         JZ 0x0052aad5
0052A9A5  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0052A9A8  85 F6                     TEST ESI,ESI
0052A9AA  0F 84 F2 00 00 00         JZ 0x0052aaa2
0052A9B0  53                        PUSH EBX
0052A9B1  8B FE                     MOV EDI,ESI
0052A9B3  8B DE                     MOV EBX,ESI
0052A9B5  81 E7 00 00 00 08         AND EDI,0x8000000
0052A9BB  81 E3 00 00 00 40         AND EBX,0x40000000
0052A9C1  F7 C6 00 00 00 01         TEST ESI,0x1000000
0052A9C7  74 30                     JZ 0x0052a9f9
0052A9C9  66 85 F6                  TEST SI,SI
0052A9CC  75 0D                     JNZ 0x0052a9db
0052A9CE  85 FF                     TEST EDI,EDI
0052A9D0  75 09                     JNZ 0x0052a9db
0052A9D2  85 DB                     TEST EBX,EBX
0052A9D4  B8 A0 16 80 00            MOV EAX,0x8016a0
0052A9D9  74 05                     JZ 0x0052a9e0
LAB_0052a9db:
0052A9DB  B8 EC 6E 7C 00            MOV EAX,0x7c6eec
LAB_0052a9e0:
0052A9E0  50                        PUSH EAX
0052A9E1  68 58 55 7C 00            PUSH 0x7c5558
0052A9E6  68 E4 6E 7C 00            PUSH 0x7c6ee4
0052A9EB  68 A4 16 80 00            PUSH 0x8016a4
0052A9F0  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0052A9F6  83 C4 10                  ADD ESP,0x10
LAB_0052a9f9:
0052A9F9  85 FF                     TEST EDI,EDI
0052A9FB  74 35                     JZ 0x0052aa32
0052A9FD  66 85 F6                  TEST SI,SI
0052AA00  75 09                     JNZ 0x0052aa0b
0052AA02  85 DB                     TEST EBX,EBX
0052AA04  B8 A0 16 80 00            MOV EAX,0x8016a0
0052AA09  74 05                     JZ 0x0052aa10
LAB_0052aa0b:
0052AA0B  B8 EC 6E 7C 00            MOV EAX,0x7c6eec
LAB_0052aa10:
0052AA10  8B 3D E8 BD 85 00         MOV EDI,dword ptr [0x0085bde8]
0052AA16  50                        PUSH EAX
0052AA17  68 54 54 7C 00            PUSH 0x7c5454
0052AA1C  68 A4 16 80 00            PUSH 0x8016a4
0052AA21  68 DC 6E 7C 00            PUSH 0x7c6edc
0052AA26  68 A4 16 80 00            PUSH 0x8016a4
0052AA2B  FF D7                     CALL EDI
0052AA2D  83 C4 14                  ADD ESP,0x14
0052AA30  EB 06                     JMP 0x0052aa38
LAB_0052aa32:
0052AA32  8B 3D E8 BD 85 00         MOV EDI,dword ptr [0x0085bde8]
LAB_0052aa38:
0052AA38  85 DB                     TEST EBX,EBX
0052AA3A  5B                        POP EBX
0052AA3B  74 29                     JZ 0x0052aa66
0052AA3D  66 85 F6                  TEST SI,SI
0052AA40  B8 EC 6E 7C 00            MOV EAX,0x7c6eec
0052AA45  75 05                     JNZ 0x0052aa4c
0052AA47  B8 A0 16 80 00            MOV EAX,0x8016a0
LAB_0052aa4c:
0052AA4C  50                        PUSH EAX
0052AA4D  68 70 56 7C 00            PUSH 0x7c5670
0052AA52  68 A4 16 80 00            PUSH 0x8016a4
0052AA57  68 DC 6E 7C 00            PUSH 0x7c6edc
0052AA5C  68 A4 16 80 00            PUSH 0x8016a4
0052AA61  FF D7                     CALL EDI
0052AA63  83 C4 14                  ADD ESP,0x14
LAB_0052aa66:
0052AA66  66 81 FE 00 01            CMP SI,0x100
0052AA6B  73 12                     JNC 0x0052aa7f
0052AA6D  81 E6 FF FF 00 00         AND ESI,0xffff
0052AA73  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
0052AA76  8D 04 8D 10 52 7C 00      LEA EAX,[ECX*0x4 + 0x7c5210]
0052AA7D  EB 05                     JMP 0x0052aa84
LAB_0052aa7f:
0052AA7F  B8 A0 16 80 00            MOV EAX,0x8016a0
LAB_0052aa84:
0052AA84  50                        PUSH EAX
0052AA85  68 A4 16 80 00            PUSH 0x8016a4
0052AA8A  68 E4 6E 7C 00            PUSH 0x7c6ee4
0052AA8F  68 A4 16 80 00            PUSH 0x8016a4
0052AA94  FF D7                     CALL EDI
0052AA96  83 C4 10                  ADD ESP,0x10
0052AA99  B8 A4 16 80 00            MOV EAX,0x8016a4
0052AA9E  5F                        POP EDI
0052AA9F  5E                        POP ESI
0052AAA0  5D                        POP EBP
0052AAA1  C3                        RET
LAB_0052aaa2:
0052AAA2  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0052AAA8  52                        PUSH EDX
0052AAA9  68 32 27 00 00            PUSH 0x2732
0052AAAE  E8 8D 56 18 00            CALL 0x006b0140
0052AAB3  8B F8                     MOV EDI,EAX
0052AAB5  83 C9 FF                  OR ECX,0xffffffff
0052AAB8  33 C0                     XOR EAX,EAX
0052AABA  F2 AE                     SCASB.REPNE ES:EDI
0052AABC  F7 D1                     NOT ECX
0052AABE  2B F9                     SUB EDI,ECX
0052AAC0  8B C1                     MOV EAX,ECX
0052AAC2  8B F7                     MOV ESI,EDI
0052AAC4  BF A4 16 80 00            MOV EDI,0x8016a4
0052AAC9  C1 E9 02                  SHR ECX,0x2
0052AACC  F3 A5                     MOVSD.REP ES:EDI,ESI
0052AACE  8B C8                     MOV ECX,EAX
0052AAD0  83 E1 03                  AND ECX,0x3
0052AAD3  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_0052aad5:
0052AAD5  5F                        POP EDI
0052AAD6  B8 A4 16 80 00            MOV EAX,0x8016a4
0052AADB  5E                        POP ESI
0052AADC  5D                        POP EBP
0052AADD  C3                        RET
