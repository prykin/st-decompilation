ccFntTy::SetSurf:
00710A90  55                        PUSH EBP
00710A91  8B EC                     MOV EBP,ESP
00710A93  83 EC 48                  SUB ESP,0x48
00710A96  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00710A9B  56                        PUSH ESI
00710A9C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00710A9F  57                        PUSH EDI
00710AA0  8D 55 BC                  LEA EDX,[EBP + -0x44]
00710AA3  8D 4D B8                  LEA ECX,[EBP + -0x48]
00710AA6  6A 00                     PUSH 0x0
00710AA8  52                        PUSH EDX
00710AA9  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00710AAC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00710AB2  E8 39 CD 01 00            CALL 0x0072d7f0
00710AB7  8B F0                     MOV ESI,EAX
00710AB9  83 C4 08                  ADD ESP,0x8
00710ABC  85 F6                     TEST ESI,ESI
00710ABE  0F 85 88 00 00 00         JNZ 0x00710b4c
00710AC4  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00710AC7  85 FF                     TEST EDI,EDI
00710AC9  75 17                     JNZ 0x00710ae2
00710ACB  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00710AD0  68 60 04 00 00            PUSH 0x460
00710AD5  68 90 01 7F 00            PUSH 0x7f0190
00710ADA  50                        PUSH EAX
00710ADB  6A CC                     PUSH -0x34
00710ADD  E8 5E 53 F9 FF            CALL 0x006a5e40
LAB_00710ae2:
00710AE2  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00710AE5  8B CE                     MOV ECX,ESI
00710AE7  E8 14 04 00 00            CALL 0x00710f00
00710AEC  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00710AEF  89 7E 72                  MOV dword ptr [ESI + 0x72],EDI
00710AF2  85 C0                     TEST EAX,EAX
00710AF4  75 06                     JNZ 0x00710afc
00710AF6  57                        PUSH EDI
00710AF7  E8 A4 44 FA FF            CALL 0x006b4fa0
LAB_00710afc:
00710AFC  89 46 76                  MOV dword ptr [ESI + 0x76],EAX
00710AFF  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00710B02  85 C0                     TEST EAX,EAX
00710B04  C7 46 7A 00 00 00 00      MOV dword ptr [ESI + 0x7a],0x0
00710B0B  7E 07                     JLE 0x00710b14
00710B0D  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00710B10  85 C9                     TEST ECX,ECX
00710B12  7F 06                     JG 0x00710b1a
LAB_00710b14:
00710B14  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
00710B17  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
LAB_00710b1a:
00710B1A  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00710B1D  89 46 68                  MOV dword ptr [ESI + 0x68],EAX
00710B20  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00710B23  89 56 60                  MOV dword ptr [ESI + 0x60],EDX
00710B26  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00710B29  89 4E 6C                  MOV dword ptr [ESI + 0x6c],ECX
00710B2C  89 56 64                  MOV dword ptr [ESI + 0x64],EDX
00710B2F  C7 46 50 00 00 00 00      MOV dword ptr [ESI + 0x50],0x0
00710B36  C7 46 54 00 00 00 00      MOV dword ptr [ESI + 0x54],0x0
00710B3D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00710B42  33 C0                     XOR EAX,EAX
00710B44  5F                        POP EDI
00710B45  5E                        POP ESI
00710B46  8B E5                     MOV ESP,EBP
00710B48  5D                        POP EBP
00710B49  C2 18 00                  RET 0x18
LAB_00710b4c:
00710B4C  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00710B4F  68 24 02 7F 00            PUSH 0x7f0224
00710B54  68 CC 4C 7A 00            PUSH 0x7a4ccc
00710B59  56                        PUSH ESI
00710B5A  6A 00                     PUSH 0x0
00710B5C  68 76 04 00 00            PUSH 0x476
00710B61  68 90 01 7F 00            PUSH 0x7f0190
00710B66  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00710B6C  E8 5F C9 F9 FF            CALL 0x006ad4d0
00710B71  83 C4 18                  ADD ESP,0x18
00710B74  85 C0                     TEST EAX,EAX
00710B76  74 01                     JZ 0x00710b79
00710B78  CC                        INT3
LAB_00710b79:
00710B79  68 78 04 00 00            PUSH 0x478
00710B7E  68 90 01 7F 00            PUSH 0x7f0190
00710B83  6A 00                     PUSH 0x0
00710B85  56                        PUSH ESI
00710B86  E8 B5 52 F9 FF            CALL 0x006a5e40
00710B8B  8B C6                     MOV EAX,ESI
00710B8D  5F                        POP EDI
00710B8E  5E                        POP ESI
00710B8F  8B E5                     MOV ESP,EBP
00710B91  5D                        POP EBP
00710B92  C2 18 00                  RET 0x18
