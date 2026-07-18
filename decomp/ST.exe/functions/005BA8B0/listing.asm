PrividerTy::PaintPrivider:
005BA8B0  55                        PUSH EBP
005BA8B1  8B EC                     MOV EBP,ESP
005BA8B3  83 EC 48                  SUB ESP,0x48
005BA8B6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005BA8BB  53                        PUSH EBX
005BA8BC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005BA8BF  56                        PUSH ESI
005BA8C0  8D 55 BC                  LEA EDX,[EBP + -0x44]
005BA8C3  8D 4D B8                  LEA ECX,[EBP + -0x48]
005BA8C6  6A 00                     PUSH 0x0
005BA8C8  52                        PUSH EDX
005BA8C9  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005BA8CC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005BA8D2  E8 19 2F 17 00            CALL 0x0072d7f0
005BA8D7  8B F0                     MOV ESI,EAX
005BA8D9  83 C4 08                  ADD ESP,0x8
005BA8DC  85 F6                     TEST ESI,ESI
005BA8DE  0F 85 23 01 00 00         JNZ 0x005baa07
005BA8E4  A1 34 67 80 00            MOV EAX,[0x00806734]
005BA8E9  8B 0D 30 67 80 00         MOV ECX,dword ptr [0x00806730]
005BA8EF  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005BA8F5  50                        PUSH EAX
005BA8F6  51                        PUSH ECX
005BA8F7  56                        PUSH ESI
005BA8F8  56                        PUSH ESI
005BA8F9  52                        PUSH EDX
005BA8FA  E8 81 B6 0F 00            CALL 0x006b5f80
005BA8FF  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005BA904  8B 48 2C                  MOV ECX,dword ptr [EAX + 0x2c]
005BA907  51                        PUSH ECX
005BA908  6A 01                     PUSH 0x1
005BA90A  56                        PUSH ESI
005BA90B  56                        PUSH ESI
005BA90C  E8 27 8E E4 FF            CALL 0x00403738
005BA911  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005BA914  8A 5D 08                  MOV BL,byte ptr [EBP + 0x8]
005BA917  83 C4 10                  ADD ESP,0x10
005BA91A  8B 86 96 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c96]
005BA920  85 C0                     TEST EAX,EAX
005BA922  75 23                     JNZ 0x005ba947
005BA924  84 DB                     TEST BL,BL
005BA926  75 1F                     JNZ 0x005ba947
005BA928  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
005BA92E  56                        PUSH ESI
005BA92F  68 45 01 00 00            PUSH 0x145
005BA934  68 2E 02 00 00            PUSH 0x22e
005BA939  6A 51                     PUSH 0x51
005BA93B  6A 79                     PUSH 0x79
005BA93D  6A 00                     PUSH 0x0
005BA93F  6A 00                     PUSH 0x0
005BA941  52                        PUSH EDX
005BA942  E8 2D 93 E4 FF            CALL 0x00403c74
LAB_005ba947:
005BA947  8A 86 5F 1A 00 00         MOV AL,byte ptr [ESI + 0x1a5f]
005BA94D  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005BA953  3C 01                     CMP AL,0x1
005BA955  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005BA95A  6A 00                     PUSH 0x0
005BA95C  8B 48 30                  MOV ECX,dword ptr [EAX + 0x30]
005BA95F  51                        PUSH ECX
005BA960  6A FF                     PUSH -0x1
005BA962  6A FE                     PUSH -0x2
005BA964  52                        PUSH EDX
005BA965  75 34                     JNZ 0x005ba99b
005BA967  68 B4 26 00 00            PUSH 0x26b4
005BA96C  E8 CF 57 0F 00            CALL 0x006b0140
005BA971  50                        PUSH EAX
005BA972  6A 18                     PUSH 0x18
005BA974  68 4C 01 00 00            PUSH 0x14c
005BA979  6A 14                     PUSH 0x14
005BA97B  68 E9 00 00 00            PUSH 0xe9
005BA980  6A 00                     PUSH 0x0
005BA982  E8 A6 A2 E4 FF            CALL 0x00404c2d
005BA987  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005BA98A  83 C4 28                  ADD ESP,0x28
005BA98D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005BA993  5E                        POP ESI
005BA994  5B                        POP EBX
005BA995  8B E5                     MOV ESP,EBP
005BA997  5D                        POP EBP
005BA998  C2 04 00                  RET 0x4
LAB_005ba99b:
005BA99B  68 B3 26 00 00            PUSH 0x26b3
005BA9A0  E8 9B 57 0F 00            CALL 0x006b0140
005BA9A5  50                        PUSH EAX
005BA9A6  6A 18                     PUSH 0x18
005BA9A8  68 4C 01 00 00            PUSH 0x14c
005BA9AD  6A 14                     PUSH 0x14
005BA9AF  68 E9 00 00 00            PUSH 0xe9
005BA9B4  6A 00                     PUSH 0x0
005BA9B6  E8 72 A2 E4 FF            CALL 0x00404c2d
005BA9BB  8B 86 9A 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c9a]
005BA9C1  83 C4 28                  ADD ESP,0x28
005BA9C4  85 C0                     TEST EAX,EAX
005BA9C6  75 2E                     JNZ 0x005ba9f6
005BA9C8  84 DB                     TEST BL,BL
005BA9CA  75 2A                     JNZ 0x005ba9f6
005BA9CC  8B 86 5B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a5b]
005BA9D2  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005BA9D8  05 40 01 00 00            ADD EAX,0x140
005BA9DD  50                        PUSH EAX
005BA9DE  6A 2E                     PUSH 0x2e
005BA9E0  68 2E 02 00 00            PUSH 0x22e
005BA9E5  68 97 01 00 00            PUSH 0x197
005BA9EA  6A 79                     PUSH 0x79
005BA9EC  6A 00                     PUSH 0x0
005BA9EE  6A 00                     PUSH 0x0
005BA9F0  51                        PUSH ECX
005BA9F1  E8 1D 85 E4 FF            CALL 0x00402f13
LAB_005ba9f6:
005BA9F6  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005BA9F9  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005BA9FF  5E                        POP ESI
005BAA00  5B                        POP EBX
005BAA01  8B E5                     MOV ESP,EBP
005BAA03  5D                        POP EBP
005BAA04  C2 04 00                  RET 0x4
LAB_005baa07:
005BAA07  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005BAA0A  68 E0 CD 7C 00            PUSH 0x7ccde0
005BAA0F  68 CC 4C 7A 00            PUSH 0x7a4ccc
005BAA14  56                        PUSH ESI
005BAA15  6A 00                     PUSH 0x0
005BAA17  68 EC 00 00 00            PUSH 0xec
005BAA1C  68 28 CD 7C 00            PUSH 0x7ccd28
005BAA21  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005BAA26  E8 A5 2A 0F 00            CALL 0x006ad4d0
005BAA2B  83 C4 18                  ADD ESP,0x18
005BAA2E  85 C0                     TEST EAX,EAX
005BAA30  74 01                     JZ 0x005baa33
005BAA32  CC                        INT3
LAB_005baa33:
005BAA33  68 EC 00 00 00            PUSH 0xec
005BAA38  68 28 CD 7C 00            PUSH 0x7ccd28
005BAA3D  6A 00                     PUSH 0x0
005BAA3F  56                        PUSH ESI
005BAA40  E8 FB B3 0E 00            CALL 0x006a5e40
005BAA45  5E                        POP ESI
005BAA46  5B                        POP EBX
005BAA47  8B E5                     MOV ESP,EBP
005BAA49  5D                        POP EBP
005BAA4A  C2 04 00                  RET 0x4
