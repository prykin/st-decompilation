MMMObjTy::OutBSlProc:
005B68B0  55                        PUSH EBP
005B68B1  8B EC                     MOV EBP,ESP
005B68B3  83 EC 4C                  SUB ESP,0x4c
005B68B6  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
005B68B9  53                        PUSH EBX
005B68BA  56                        PUSH ESI
005B68BB  57                        PUSH EDI
005B68BC  85 C0                     TEST EAX,EAX
005B68BE  0F 84 D6 00 00 00         JZ 0x005b699a
005B68C4  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005B68C7  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B68CC  8D 55 B8                  LEA EDX,[EBP + -0x48]
005B68CF  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005B68D2  6A 00                     PUSH 0x0
005B68D4  52                        PUSH EDX
005B68D5  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005B68D8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B68DE  E8 0D 6F 17 00            CALL 0x0072d7f0
005B68E3  8B F0                     MOV ESI,EAX
005B68E5  83 C4 08                  ADD ESP,0x8
005B68E8  85 F6                     TEST ESI,ESI
005B68EA  75 6F                     JNZ 0x005b695b
005B68EC  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
005B68EF  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
005B68F2  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
005B68F5  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
005B68F8  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005B68FB  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005B68FE  50                        PUSH EAX
005B68FF  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005B6902  57                        PUSH EDI
005B6903  51                        PUSH ECX
005B6904  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005B6907  53                        PUSH EBX
005B6908  52                        PUSH EDX
005B6909  50                        PUSH EAX
005B690A  51                        PUSH ECX
005B690B  56                        PUSH ESI
005B690C  E8 88 C7 E4 FF            CALL 0x00403099
005B6911  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005B6914  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
005B6917  83 C7 B4                  ADD EDI,-0x4c
005B691A  6A 00                     PUSH 0x0
005B691C  6A 03                     PUSH 0x3
005B691E  83 C3 26                  ADD EBX,0x26
005B6921  57                        PUSH EDI
005B6922  8D 44 02 EB               LEA EAX,[EDX + EAX*0x1 + -0x15]
005B6926  6A 07                     PUSH 0x7
005B6928  53                        PUSH EBX
005B6929  50                        PUSH EAX
005B692A  56                        PUSH ESI
005B692B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005B692E  E8 2D FD 10 00            CALL 0x006c6660
005B6933  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005B6936  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005B6939  8B 11                     MOV EDX,dword ptr [ECX]
005B693B  52                        PUSH EDX
005B693C  6A 03                     PUSH 0x3
005B693E  57                        PUSH EDI
005B693F  6A 07                     PUSH 0x7
005B6941  53                        PUSH EBX
005B6942  50                        PUSH EAX
005B6943  56                        PUSH ESI
005B6944  E8 27 FB 10 00            CALL 0x006c6470
005B6949  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005B694C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B6952  5F                        POP EDI
005B6953  5E                        POP ESI
005B6954  5B                        POP EBX
005B6955  8B E5                     MOV ESP,EBP
005B6957  5D                        POP EBP
005B6958  C2 20 00                  RET 0x20
LAB_005b695b:
005B695B  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005B695E  68 38 CB 7C 00            PUSH 0x7ccb38
005B6963  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B6968  56                        PUSH ESI
005B6969  6A 00                     PUSH 0x0
005B696B  68 47 01 00 00            PUSH 0x147
005B6970  68 38 CA 7C 00            PUSH 0x7cca38
005B6975  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005B697B  E8 50 6B 0F 00            CALL 0x006ad4d0
005B6980  83 C4 18                  ADD ESP,0x18
005B6983  85 C0                     TEST EAX,EAX
005B6985  74 01                     JZ 0x005b6988
005B6987  CC                        INT3
LAB_005b6988:
005B6988  68 47 01 00 00            PUSH 0x147
005B698D  68 38 CA 7C 00            PUSH 0x7cca38
005B6992  6A 00                     PUSH 0x0
005B6994  56                        PUSH ESI
005B6995  E8 A6 F4 0E 00            CALL 0x006a5e40
LAB_005b699a:
005B699A  5F                        POP EDI
005B699B  5E                        POP ESI
005B699C  5B                        POP EBX
005B699D  8B E5                     MOV ESP,EBP
005B699F  5D                        POP EBP
005B69A0  C2 20 00                  RET 0x20
