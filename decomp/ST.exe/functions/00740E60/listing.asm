FUN_00740e60:
00740E60  55                        PUSH EBP
00740E61  8B EC                     MOV EBP,ESP
00740E63  51                        PUSH ECX
00740E64  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00740E67  3B 05 DC A2 85 00         CMP EAX,dword ptr [0x0085a2dc]
00740E6D  0F 83 9B 00 00 00         JNC 0x00740f0e
00740E73  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00740E76  C1 F9 05                  SAR ECX,0x5
00740E79  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00740E7C  83 E2 1F                  AND EDX,0x1f
00740E7F  8B 04 8D A0 A1 85 00      MOV EAX,dword ptr [ECX*0x4 + 0x85a1a0]
00740E86  0F BE 4C D0 04            MOVSX ECX,byte ptr [EAX + EDX*0x8 + 0x4]
00740E8B  83 E1 01                  AND ECX,0x1
00740E8E  85 C9                     TEST ECX,ECX
00740E90  74 7C                     JZ 0x00740f0e
00740E92  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00740E95  C1 FA 05                  SAR EDX,0x5
00740E98  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00740E9B  83 E0 1F                  AND EAX,0x1f
00740E9E  8B 0C 95 A0 A1 85 00      MOV ECX,dword ptr [EDX*0x4 + 0x85a1a0]
00740EA5  83 3C C1 FF               CMP dword ptr [ECX + EAX*0x8],-0x1
00740EA9  74 63                     JZ 0x00740f0e
00740EAB  83 3D D0 14 7F 00 01      CMP dword ptr [0x007f14d0],0x1
00740EB2  75 3C                     JNZ 0x00740ef0
00740EB4  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00740EB7  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00740EBA  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
00740EBE  74 0E                     JZ 0x00740ece
00740EC0  83 7D FC 01               CMP dword ptr [EBP + -0x4],0x1
00740EC4  74 14                     JZ 0x00740eda
00740EC6  83 7D FC 02               CMP dword ptr [EBP + -0x4],0x2
00740ECA  74 1A                     JZ 0x00740ee6
00740ECC  EB 22                     JMP 0x00740ef0
LAB_00740ece:
00740ECE  6A 00                     PUSH 0x0
00740ED0  6A F6                     PUSH -0xa
00740ED2  FF 15 58 BC 85 00         CALL dword ptr [0x0085bc58]
00740ED8  EB 16                     JMP 0x00740ef0
LAB_00740eda:
00740EDA  6A 00                     PUSH 0x0
00740EDC  6A F5                     PUSH -0xb
00740EDE  FF 15 58 BC 85 00         CALL dword ptr [0x0085bc58]
00740EE4  EB 0A                     JMP 0x00740ef0
LAB_00740ee6:
00740EE6  6A 00                     PUSH 0x0
00740EE8  6A F4                     PUSH -0xc
00740EEA  FF 15 58 BC 85 00         CALL dword ptr [0x0085bc58]
LAB_00740ef0:
00740EF0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00740EF3  C1 F8 05                  SAR EAX,0x5
00740EF6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00740EF9  83 E1 1F                  AND ECX,0x1f
00740EFC  8B 14 85 A0 A1 85 00      MOV EDX,dword ptr [EAX*0x4 + 0x85a1a0]
00740F03  C7 04 CA FF FF FF FF      MOV dword ptr [EDX + ECX*0x8],0xffffffff
00740F0A  33 C0                     XOR EAX,EAX
00740F0C  EB 17                     JMP 0x00740f25
LAB_00740f0e:
00740F0E  C7 05 48 71 85 00 09 00 00 00  MOV dword ptr [0x00857148],0x9
00740F18  C7 05 4C 71 85 00 00 00 00 00  MOV dword ptr [0x0085714c],0x0
00740F22  83 C8 FF                  OR EAX,0xffffffff
LAB_00740f25:
00740F25  8B E5                     MOV ESP,EBP
00740F27  5D                        POP EBP
00740F28  C3                        RET
