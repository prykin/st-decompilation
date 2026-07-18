FUN_005f6af0:
005F6AF0  55                        PUSH EBP
005F6AF1  8B EC                     MOV EBP,ESP
005F6AF3  83 EC 4C                  SUB ESP,0x4c
005F6AF6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005F6AFB  56                        PUSH ESI
005F6AFC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005F6AFF  57                        PUSH EDI
005F6B00  8D 55 B8                  LEA EDX,[EBP + -0x48]
005F6B03  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005F6B06  6A 00                     PUSH 0x0
005F6B08  52                        PUSH EDX
005F6B09  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
005F6B10  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005F6B13  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005F6B19  E8 D2 6C 13 00            CALL 0x0072d7f0
005F6B1E  8B F0                     MOV ESI,EAX
005F6B20  83 C4 08                  ADD ESP,0x8
005F6B23  85 F6                     TEST ESI,ESI
005F6B25  0F 85 D3 01 00 00         JNZ 0x005f6cfe
005F6B2B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005F6B2E  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005F6B31  85 C0                     TEST EAX,EAX
005F6B33  8D B7 D5 01 00 00         LEA ESI,[EDI + 0x1d5]
005F6B39  6A 1D                     PUSH 0x1d
005F6B3B  0F 84 E3 00 00 00         JZ 0x005f6c24
005F6B41  A1 74 67 80 00            MOV EAX,[0x00806774]
005F6B46  68 D8 E6 7C 00            PUSH 0x7ce6d8
005F6B4B  50                        PUSH EAX
005F6B4C  6A 0E                     PUSH 0xe
005F6B4E  8B CE                     MOV ECX,ESI
005F6B50  E8 2E D6 E0 FF            CALL 0x00404183
005F6B55  85 C0                     TEST EAX,EAX
005F6B57  0F 85 E0 01 00 00         JNZ 0x005f6d3d
005F6B5D  8B 0D 90 E7 7C 00         MOV ECX,dword ptr [0x007ce790]
005F6B63  8B 15 8C E7 7C 00         MOV EDX,dword ptr [0x007ce78c]
005F6B69  51                        PUSH ECX
005F6B6A  52                        PUSH EDX
005F6B6B  8B CE                     MOV ECX,ESI
005F6B6D  E8 52 B8 E0 FF            CALL 0x004023c4
005F6B72  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005F6B77  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
005F6B7D  51                        PUSH ECX
005F6B7E  6A 0E                     PUSH 0xe
005F6B80  8B CE                     MOV ECX,ESI
005F6B82  E8 B9 E6 E0 FF            CALL 0x00405240
005F6B87  6A 18                     PUSH 0x18
005F6B89  8B CF                     MOV ECX,EDI
005F6B8B  E8 1A AF E0 FF            CALL 0x00401aaa
005F6B90  8B 97 35 02 00 00         MOV EDX,dword ptr [EDI + 0x235]
005F6B96  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
005F6B9C  6A 1D                     PUSH 0x1d
005F6B9E  8B 04 95 E0 E6 7C 00      MOV EAX,dword ptr [EDX*0x4 + 0x7ce6e0]
005F6BA5  50                        PUSH EAX
005F6BA6  51                        PUSH ECX
005F6BA7  6A 0C                     PUSH 0xc
005F6BA9  8B CE                     MOV ECX,ESI
005F6BAB  E8 D3 D5 E0 FF            CALL 0x00404183
005F6BB0  85 C0                     TEST EAX,EAX
005F6BB2  74 0B                     JZ 0x005f6bbf
005F6BB4  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005F6BB7  5F                        POP EDI
005F6BB8  5E                        POP ESI
005F6BB9  8B E5                     MOV ESP,EBP
005F6BBB  5D                        POP EBP
005F6BBC  C2 04 00                  RET 0x4
LAB_005f6bbf:
005F6BBF  6A 0C                     PUSH 0xc
005F6BC1  8B CE                     MOV ECX,ESI
005F6BC3  E8 DE EE E0 FF            CALL 0x00405aa6
005F6BC8  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
005F6BCE  8B CE                     MOV ECX,ESI
005F6BD0  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
005F6BD6  50                        PUSH EAX
005F6BD7  6A 0C                     PUSH 0xc
005F6BD9  E8 62 E6 E0 FF            CALL 0x00405240
005F6BDE  8B CF                     MOV ECX,EDI
005F6BE0  E8 D4 AE E0 FF            CALL 0x00401ab9
005F6BE5  8B CE                     MOV ECX,ESI
005F6BE7  E8 E0 E6 E0 FF            CALL 0x004052cc
005F6BEC  8B CE                     MOV ECX,ESI
005F6BEE  89 87 B7 02 00 00         MOV dword ptr [EDI + 0x2b7],EAX
005F6BF4  E8 16 D1 E0 FF            CALL 0x00403d0f
005F6BF9  8A 87 BB 02 00 00         MOV AL,byte ptr [EDI + 0x2bb]
005F6BFF  84 C0                     TEST AL,AL
005F6C01  74 07                     JZ 0x005f6c0a
005F6C03  8B CF                     MOV ECX,EDI
005F6C05  E8 42 DA E0 FF            CALL 0x0040464c
LAB_005f6c0a:
005F6C0A  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
005F6C0D  C6 87 BB 02 00 00 00      MOV byte ptr [EDI + 0x2bb],0x0
005F6C14  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005F6C19  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005F6C1C  5F                        POP EDI
005F6C1D  5E                        POP ESI
005F6C1E  8B E5                     MOV ESP,EBP
005F6C20  5D                        POP EBP
005F6C21  C2 04 00                  RET 0x4
LAB_005f6c24:
005F6C24  8B 87 CD 02 00 00         MOV EAX,dword ptr [EDI + 0x2cd]
005F6C2A  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
005F6C2D  8D 04 48                  LEA EAX,[EAX + ECX*0x2]
005F6C30  8B CE                     MOV ECX,ESI
005F6C32  8D 94 40 18 E7 7C 00      LEA EDX,[EAX + EAX*0x2 + 0x7ce718]
005F6C39  A1 74 67 80 00            MOV EAX,[0x00806774]
005F6C3E  52                        PUSH EDX
005F6C3F  50                        PUSH EAX
005F6C40  6A 08                     PUSH 0x8
005F6C42  E8 3C D5 E0 FF            CALL 0x00404183
005F6C47  8B 87 CD 02 00 00         MOV EAX,dword ptr [EDI + 0x2cd]
005F6C4D  6A 1D                     PUSH 0x1d
005F6C4F  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
005F6C52  8D 04 48                  LEA EAX,[EAX + ECX*0x2]
005F6C55  8B CE                     MOV ECX,ESI
005F6C57  8D 94 40 23 E7 7C 00      LEA EDX,[EAX + EAX*0x2 + 0x7ce723]
005F6C5E  A1 64 67 80 00            MOV EAX,[0x00806764]
005F6C63  52                        PUSH EDX
005F6C64  50                        PUSH EAX
005F6C65  6A 09                     PUSH 0x9
005F6C67  E8 17 D5 E0 FF            CALL 0x00404183
005F6C6C  8B 87 CD 02 00 00         MOV EAX,dword ptr [EDI + 0x2cd]
005F6C72  6A 1D                     PUSH 0x1d
005F6C74  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
005F6C77  8D 04 48                  LEA EAX,[EAX + ECX*0x2]
005F6C7A  8B CE                     MOV ECX,ESI
005F6C7C  8D 94 40 2E E7 7C 00      LEA EDX,[EAX + EAX*0x2 + 0x7ce72e]
005F6C83  A1 74 67 80 00            MOV EAX,[0x00806774]
005F6C88  52                        PUSH EDX
005F6C89  50                        PUSH EAX
005F6C8A  6A 0A                     PUSH 0xa
005F6C8C  E8 F2 D4 E0 FF            CALL 0x00404183
005F6C91  6A 0A                     PUSH 0xa
005F6C93  8B CE                     MOV ECX,ESI
005F6C95  E8 3A B6 E0 FF            CALL 0x004022d4
005F6C9A  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005F6CA0  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
005F6CA6  8B CE                     MOV ECX,ESI
005F6CA8  52                        PUSH EDX
005F6CA9  6A 0A                     PUSH 0xa
005F6CAB  E8 90 E5 E0 FF            CALL 0x00405240
005F6CB0  A1 B8 32 80 00            MOV EAX,[0x008032b8]
005F6CB5  6A 10                     PUSH 0x10
005F6CB7  50                        PUSH EAX
005F6CB8  8B CE                     MOV ECX,ESI
005F6CBA  E8 2F D8 E0 FF            CALL 0x004044ee
005F6CBF  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005F6CC5  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
005F6CCB  8B CE                     MOV ECX,ESI
005F6CCD  52                        PUSH EDX
005F6CCE  6A 08                     PUSH 0x8
005F6CD0  E8 6B E5 E0 FF            CALL 0x00405240
005F6CD5  6A 0A                     PUSH 0xa
005F6CD7  8B CE                     MOV ECX,ESI
005F6CD9  E8 55 C5 E0 FF            CALL 0x00403233
005F6CDE  8B CE                     MOV ECX,ESI
005F6CE0  E8 E7 E5 E0 FF            CALL 0x004052cc
005F6CE5  89 87 B7 02 00 00         MOV dword ptr [EDI + 0x2b7],EAX
005F6CEB  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
005F6CEE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005F6CF3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005F6CF6  5F                        POP EDI
005F6CF7  5E                        POP ESI
005F6CF8  8B E5                     MOV ESP,EBP
005F6CFA  5D                        POP EBP
005F6CFB  C2 04 00                  RET 0x4
LAB_005f6cfe:
005F6CFE  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005F6D01  68 A8 E8 7C 00            PUSH 0x7ce8a8
005F6D06  68 CC 4C 7A 00            PUSH 0x7a4ccc
005F6D0B  56                        PUSH ESI
005F6D0C  6A 00                     PUSH 0x0
005F6D0E  68 AF 01 00 00            PUSH 0x1af
005F6D13  68 68 E8 7C 00            PUSH 0x7ce868
005F6D18  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005F6D1E  E8 AD 67 0B 00            CALL 0x006ad4d0
005F6D23  83 C4 18                  ADD ESP,0x18
005F6D26  85 C0                     TEST EAX,EAX
005F6D28  74 01                     JZ 0x005f6d2b
005F6D2A  CC                        INT3
LAB_005f6d2b:
005F6D2B  68 B1 01 00 00            PUSH 0x1b1
005F6D30  68 68 E8 7C 00            PUSH 0x7ce868
005F6D35  6A 00                     PUSH 0x0
005F6D37  56                        PUSH ESI
005F6D38  E8 03 F1 0A 00            CALL 0x006a5e40
LAB_005f6d3d:
005F6D3D  5F                        POP EDI
005F6D3E  B8 FF FF 00 00            MOV EAX,0xffff
005F6D43  5E                        POP ESI
005F6D44  8B E5                     MOV ESP,EBP
005F6D46  5D                        POP EBP
005F6D47  C2 04 00                  RET 0x4
