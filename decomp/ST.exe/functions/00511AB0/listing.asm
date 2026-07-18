HelpPanelTy::CheckBkView:
00511AB0  55                        PUSH EBP
00511AB1  8B EC                     MOV EBP,ESP
00511AB3  83 EC 4C                  SUB ESP,0x4c
00511AB6  8B 81 18 02 00 00         MOV EAX,dword ptr [ECX + 0x218]
00511ABC  53                        PUSH EBX
00511ABD  56                        PUSH ESI
00511ABE  57                        PUSH EDI
00511ABF  85 C0                     TEST EAX,EAX
00511AC1  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00511AC4  0F 84 35 01 00 00         JZ 0x00511bff
00511ACA  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00511ACD  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00511AD0  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
00511AD3  81 E1 FF FF 00 00         AND ECX,0xffff
00511AD9  03 CE                     ADD ECX,ESI
00511ADB  3B CA                     CMP ECX,EDX
00511ADD  0F 8E 1C 01 00 00         JLE 0x00511bff
00511AE3  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
00511AE9  8D 4D B8                  LEA ECX,[EBP + -0x48]
00511AEC  8D 45 B4                  LEA EAX,[EBP + -0x4c]
00511AEF  6A 00                     PUSH 0x0
00511AF1  51                        PUSH ECX
00511AF2  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
00511AF5  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00511AFA  E8 F1 BC 21 00            CALL 0x0072d7f0
00511AFF  8B F0                     MOV ESI,EAX
00511B01  83 C4 08                  ADD ESP,0x8
00511B04  85 F6                     TEST ESI,ESI
00511B06  0F 85 B4 00 00 00         JNZ 0x00511bc0
00511B0C  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00511B0F  6A 01                     PUSH 0x1
00511B11  8B 86 DC 01 00 00         MOV EAX,dword ptr [ESI + 0x1dc]
00511B17  8B BE 18 02 00 00         MOV EDI,dword ptr [ESI + 0x218]
00511B1D  8D 9E 18 02 00 00         LEA EBX,[ESI + 0x218]
00511B23  8D 50 28                  LEA EDX,[EAX + 0x28]
00511B26  52                        PUSH EDX
00511B27  50                        PUSH EAX
00511B28  E8 B3 34 1A 00            CALL 0x006b4fe0
00511B2D  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
00511B30  50                        PUSH EAX
00511B31  8B 86 DC 01 00 00         MOV EAX,dword ptr [ESI + 0x1dc]
00511B37  33 C9                     XOR ECX,ECX
00511B39  83 C2 32                  ADD EDX,0x32
00511B3C  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
00511B40  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
00511B43  51                        PUSH ECX
00511B44  52                        PUSH EDX
00511B45  50                        PUSH EAX
00511B46  E8 75 35 1A 00            CALL 0x006b50c0
00511B4B  8B F0                     MOV ESI,EAX
00511B4D  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
00511B50  85 C0                     TEST EAX,EAX
00511B52  75 17                     JNZ 0x00511b6b
00511B54  66 8B 46 0E               MOV AX,word ptr [ESI + 0xe]
00511B58  0F AF 46 04               IMUL EAX,dword ptr [ESI + 0x4]
00511B5C  83 C0 1F                  ADD EAX,0x1f
00511B5F  C1 E8 03                  SHR EAX,0x3
00511B62  25 FC FF FF 1F            AND EAX,0x1ffffffc
00511B67  0F AF 46 08               IMUL EAX,dword ptr [ESI + 0x8]
LAB_00511b6b:
00511B6B  56                        PUSH ESI
00511B6C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00511B6F  E8 2C 34 1A 00            CALL 0x006b4fa0
00511B74  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00511B77  8B F8                     MOV EDI,EAX
00511B79  8B D1                     MOV EDX,ECX
00511B7B  83 C8 FF                  OR EAX,0xffffffff
00511B7E  C1 E9 02                  SHR ECX,0x2
00511B81  F3 AB                     STOSD.REP ES:EDI
00511B83  8B CA                     MOV ECX,EDX
00511B85  83 E1 03                  AND ECX,0x3
00511B88  F3 AA                     STOSB.REP ES:EDI
00511B8A  8B 03                     MOV EAX,dword ptr [EBX]
00511B8C  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00511B8F  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00511B92  51                        PUSH ECX
00511B93  52                        PUSH EDX
00511B94  6A 00                     PUSH 0x0
00511B96  6A 00                     PUSH 0x0
00511B98  6A 00                     PUSH 0x0
00511B9A  50                        PUSH EAX
00511B9B  6A 00                     PUSH 0x0
00511B9D  6A 00                     PUSH 0x0
00511B9F  6A 00                     PUSH 0x0
00511BA1  56                        PUSH ESI
00511BA2  E8 49 3A 1A 00            CALL 0x006b55f0
00511BA7  53                        PUSH EBX
00511BA8  E8 B3 94 19 00            CALL 0x006ab060
00511BAD  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00511BB0  89 33                     MOV dword ptr [EBX],ESI
00511BB2  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00511BB7  5F                        POP EDI
00511BB8  5E                        POP ESI
00511BB9  5B                        POP EBX
00511BBA  8B E5                     MOV ESP,EBP
00511BBC  5D                        POP EBP
00511BBD  C2 08 00                  RET 0x8
LAB_00511bc0:
00511BC0  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00511BC3  68 38 39 7C 00            PUSH 0x7c3938
00511BC8  68 CC 4C 7A 00            PUSH 0x7a4ccc
00511BCD  56                        PUSH ESI
00511BCE  6A 00                     PUSH 0x0
00511BD0  68 DC 00 00 00            PUSH 0xdc
00511BD5  68 3C 38 7C 00            PUSH 0x7c383c
00511BDA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00511BE0  E8 EB B8 19 00            CALL 0x006ad4d0
00511BE5  83 C4 18                  ADD ESP,0x18
00511BE8  85 C0                     TEST EAX,EAX
00511BEA  74 01                     JZ 0x00511bed
00511BEC  CC                        INT3
LAB_00511bed:
00511BED  68 DC 00 00 00            PUSH 0xdc
00511BF2  68 3C 38 7C 00            PUSH 0x7c383c
00511BF7  6A 00                     PUSH 0x0
00511BF9  56                        PUSH ESI
00511BFA  E8 41 42 19 00            CALL 0x006a5e40
LAB_00511bff:
00511BFF  5F                        POP EDI
00511C00  5E                        POP ESI
00511C01  5B                        POP EBX
00511C02  8B E5                     MOV ESP,EBP
00511C04  5D                        POP EBP
00511C05  C2 08 00                  RET 0x8
