WaitTy::PaintWait:
005E79B0  55                        PUSH EBP
005E79B1  8B EC                     MOV EBP,ESP
005E79B3  83 EC 48                  SUB ESP,0x48
005E79B6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005E79BB  53                        PUSH EBX
005E79BC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005E79BF  56                        PUSH ESI
005E79C0  8D 55 BC                  LEA EDX,[EBP + -0x44]
005E79C3  8D 4D B8                  LEA ECX,[EBP + -0x48]
005E79C6  6A 00                     PUSH 0x0
005E79C8  52                        PUSH EDX
005E79C9  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005E79CC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E79D2  E8 19 5E 14 00            CALL 0x0072d7f0
005E79D7  8B F0                     MOV ESI,EAX
005E79D9  83 C4 08                  ADD ESP,0x8
005E79DC  85 F6                     TEST ESI,ESI
005E79DE  0F 85 55 01 00 00         JNZ 0x005e7b39
005E79E4  A1 34 67 80 00            MOV EAX,[0x00806734]
005E79E9  8B 0D 30 67 80 00         MOV ECX,dword ptr [0x00806730]
005E79EF  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E79F5  50                        PUSH EAX
005E79F6  51                        PUSH ECX
005E79F7  56                        PUSH ESI
005E79F8  56                        PUSH ESI
005E79F9  52                        PUSH EDX
005E79FA  E8 81 E5 0C 00            CALL 0x006b5f80
005E79FF  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005E7A02  8B 46 5D                  MOV EAX,dword ptr [ESI + 0x5d]
005E7A05  50                        PUSH EAX
005E7A06  6A 01                     PUSH 0x1
005E7A08  6A 00                     PUSH 0x0
005E7A0A  6A 00                     PUSH 0x0
005E7A0C  E8 27 BD E1 FF            CALL 0x00403738
005E7A11  8B 86 F8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1af8]
005E7A17  8A 5D 08                  MOV BL,byte ptr [EBP + 0x8]
005E7A1A  83 C4 10                  ADD ESP,0x10
005E7A1D  85 C0                     TEST EAX,EAX
005E7A1F  75 32                     JNZ 0x005e7a53
005E7A21  84 DB                     TEST BL,BL
005E7A23  75 2E                     JNZ 0x005e7a53
005E7A25  8B 8E 5B 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a5b]
005E7A2B  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
005E7A31  81 C1 40 01 00 00         ADD ECX,0x140
005E7A37  51                        PUSH ECX
005E7A38  68 9D 01 00 00            PUSH 0x19d
005E7A3D  68 04 02 00 00            PUSH 0x204
005E7A42  6A 38                     PUSH 0x38
005E7A44  68 12 01 00 00            PUSH 0x112
005E7A49  6A 00                     PUSH 0x0
005E7A4B  6A 00                     PUSH 0x0
005E7A4D  52                        PUSH EDX
005E7A4E  E8 46 B6 E1 FF            CALL 0x00403099
LAB_005e7a53:
005E7A53  8B 86 00 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b00]
005E7A59  85 C0                     TEST EAX,EAX
005E7A5B  75 04                     JNZ 0x005e7a61
005E7A5D  84 DB                     TEST BL,BL
005E7A5F  74 18                     JZ 0x005e7a79
LAB_005e7a61:
005E7A61  84 DB                     TEST BL,BL
005E7A63  74 41                     JZ 0x005e7aa6
005E7A65  8B 86 64 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a64]
005E7A6B  85 C0                     TEST EAX,EAX
005E7A6D  74 37                     JZ 0x005e7aa6
005E7A6F  8B 86 68 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a68]
005E7A75  85 C0                     TEST EAX,EAX
005E7A77  75 2D                     JNZ 0x005e7aa6
LAB_005e7a79:
005E7A79  8B 86 5B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a5b]
005E7A7F  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005E7A85  05 40 01 00 00            ADD EAX,0x140
005E7A8A  50                        PUSH EAX
005E7A8B  68 21 01 00 00            PUSH 0x121
005E7A90  68 F9 00 00 00            PUSH 0xf9
005E7A95  68 B4 00 00 00            PUSH 0xb4
005E7A9A  6A 0A                     PUSH 0xa
005E7A9C  6A 00                     PUSH 0x0
005E7A9E  6A 00                     PUSH 0x0
005E7AA0  51                        PUSH ECX
005E7AA1  E8 2C C8 E1 FF            CALL 0x004042d2
LAB_005e7aa6:
005E7AA6  8B 86 FC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1afc]
005E7AAC  85 C0                     TEST EAX,EAX
005E7AAE  75 04                     JNZ 0x005e7ab4
005E7AB0  84 DB                     TEST BL,BL
005E7AB2  74 0E                     JZ 0x005e7ac2
LAB_005e7ab4:
005E7AB4  84 DB                     TEST BL,BL
005E7AB6  74 37                     JZ 0x005e7aef
005E7AB8  8B 86 64 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a64]
005E7ABE  85 C0                     TEST EAX,EAX
005E7AC0  74 2D                     JZ 0x005e7aef
LAB_005e7ac2:
005E7AC2  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
005E7AC8  A1 9C 75 80 00            MOV EAX,[0x0080759c]
005E7ACD  81 C2 40 01 00 00         ADD EDX,0x140
005E7AD3  52                        PUSH EDX
005E7AD4  6A 62                     PUSH 0x62
005E7AD6  68 90 01 00 00            PUSH 0x190
005E7ADB  68 F1 01 00 00            PUSH 0x1f1
005E7AE0  68 C8 00 00 00            PUSH 0xc8
005E7AE5  6A 00                     PUSH 0x0
005E7AE7  6A 00                     PUSH 0x0
005E7AE9  50                        PUSH EAX
005E7AEA  E8 72 C0 E1 FF            CALL 0x00403b61
LAB_005e7aef:
005E7AEF  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E7AF5  A1 18 76 80 00            MOV EAX,[0x00807618]
005E7AFA  6A 00                     PUSH 0x0
005E7AFC  8B 51 30                  MOV EDX,dword ptr [ECX + 0x30]
005E7AFF  52                        PUSH EDX
005E7B00  6A FF                     PUSH -0x1
005E7B02  6A FE                     PUSH -0x2
005E7B04  50                        PUSH EAX
005E7B05  68 AE 26 00 00            PUSH 0x26ae
005E7B0A  E8 31 86 0C 00            CALL 0x006b0140
005E7B0F  50                        PUSH EAX
005E7B10  6A 18                     PUSH 0x18
005E7B12  68 4C 01 00 00            PUSH 0x14c
005E7B17  6A 14                     PUSH 0x14
005E7B19  68 E9 00 00 00            PUSH 0xe9
005E7B1E  6A 00                     PUSH 0x0
005E7B20  E8 08 D1 E1 FF            CALL 0x00404c2d
005E7B25  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005E7B28  83 C4 28                  ADD ESP,0x28
005E7B2B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E7B31  5E                        POP ESI
005E7B32  5B                        POP EBX
005E7B33  8B E5                     MOV ESP,EBP
005E7B35  5D                        POP EBP
005E7B36  C2 04 00                  RET 0x4
LAB_005e7b39:
005E7B39  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005E7B3C  68 AC DD 7C 00            PUSH 0x7cddac
005E7B41  68 CC 4C 7A 00            PUSH 0x7a4ccc
005E7B46  56                        PUSH ESI
005E7B47  6A 00                     PUSH 0x0
005E7B49  68 EB 00 00 00            PUSH 0xeb
005E7B4E  68 5C DD 7C 00            PUSH 0x7cdd5c
005E7B53  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005E7B59  E8 72 59 0C 00            CALL 0x006ad4d0
005E7B5E  83 C4 18                  ADD ESP,0x18
005E7B61  85 C0                     TEST EAX,EAX
005E7B63  74 01                     JZ 0x005e7b66
005E7B65  CC                        INT3
LAB_005e7b66:
005E7B66  68 EB 00 00 00            PUSH 0xeb
005E7B6B  68 5C DD 7C 00            PUSH 0x7cdd5c
005E7B70  6A 00                     PUSH 0x0
005E7B72  56                        PUSH ESI
005E7B73  E8 C8 E2 0B 00            CALL 0x006a5e40
005E7B78  5E                        POP ESI
005E7B79  5B                        POP EBX
005E7B7A  8B E5                     MOV ESP,EBP
005E7B7C  5D                        POP EBP
005E7B7D  C2 04 00                  RET 0x4
