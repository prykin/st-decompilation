HoloTy::Init:
005AACB0  55                        PUSH EBP
005AACB1  8B EC                     MOV EBP,ESP
005AACB3  83 EC 54                  SUB ESP,0x54
005AACB6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005AACBB  53                        PUSH EBX
005AACBC  56                        PUSH ESI
005AACBD  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
005AACC0  57                        PUSH EDI
005AACC1  8D 55 B0                  LEA EDX,[EBP + -0x50]
005AACC4  8D 4D AC                  LEA ECX,[EBP + -0x54]
005AACC7  6A 00                     PUSH 0x0
005AACC9  52                        PUSH EDX
005AACCA  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
005AACD1  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
005AACD4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005AACDA  E8 11 2B 18 00            CALL 0x0072d7f0
005AACDF  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
005AACE2  83 C4 08                  ADD ESP,0x8
005AACE5  85 C0                     TEST EAX,EAX
005AACE7  0F 85 BE 01 00 00         JNZ 0x005aaeab
005AACED  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
005AACF0  85 C9                     TEST ECX,ECX
005AACF2  89 4E 07                  MOV dword ptr [ESI + 0x7],ECX
005AACF5  0F 84 95 01 00 00         JZ 0x005aae90
005AACFB  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005AACFE  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
005AAD01  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005AAD04  89 56 23                  MOV dword ptr [ESI + 0x23],EDX
005AAD07  89 7E 27                  MOV dword ptr [ESI + 0x27],EDI
005AAD0A  88 46 01                  MOV byte ptr [ESI + 0x1],AL
005AAD0D  8B 59 04                  MOV EBX,dword ptr [ECX + 0x4]
005AAD10  25 FF 00 00 00            AND EAX,0xff
005AAD15  89 5E 2B                  MOV dword ptr [ESI + 0x2b],EBX
005AAD18  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
005AAD1B  48                        DEC EAX
005AAD1C  89 4E 2F                  MOV dword ptr [ESI + 0x2f],ECX
005AAD1F  83 F8 03                  CMP EAX,0x3
005AAD22  77 43                     JA 0x005aad67
switchD_005aad24::switchD:
005AAD24  FF 24 85 EC AE 5A 00      JMP dword ptr [EAX*0x4 + 0x5aaeec]
switchD_005aad24::caseD_1:
005AAD2B  A1 34 67 80 00            MOV EAX,[0x00806734]
005AAD30  8B 4E 2B                  MOV ECX,dword ptr [ESI + 0x2b]
005AAD33  2B C7                     SUB EAX,EDI
005AAD35  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005AAD38  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005AAD3B  EB 2D                     JMP 0x005aad6a
switchD_005aad24::caseD_3:
005AAD3D  8B 56 2B                  MOV EDX,dword ptr [ESI + 0x2b]
005AAD40  8D 04 39                  LEA EAX,[ECX + EDI*0x1]
005AAD43  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005AAD46  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005AAD49  EB 1F                     JMP 0x005aad6a
switchD_005aad24::caseD_2:
005AAD4B  A1 30 67 80 00            MOV EAX,[0x00806730]
005AAD50  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005AAD53  2B C2                     SUB EAX,EDX
005AAD55  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005AAD58  EB 10                     JMP 0x005aad6a
switchD_005aad24::caseD_4:
005AAD5A  8B 46 2B                  MOV EAX,dword ptr [ESI + 0x2b]
005AAD5D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005AAD60  03 C2                     ADD EAX,EDX
005AAD62  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005AAD65  EB 03                     JMP 0x005aad6a
LAB_005aad67:
005AAD67  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
switchD_005aad24::default:
005AAD6A  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
005AAD6D  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
005AAD70  81 E1 FF 00 00 00         AND ECX,0xff
005AAD76  52                        PUSH EDX
005AAD77  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
005AAD7A  89 4E 13                  MOV dword ptr [ESI + 0x13],ECX
005AAD7D  51                        PUSH ECX
005AAD7E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005AAD81  52                        PUSH EDX
005AAD82  51                        PUSH ECX
005AAD83  8D 56 0F                  LEA EDX,[ESI + 0xf]
005AAD86  50                        PUSH EAX
005AAD87  52                        PUSH EDX
005AAD88  8B CE                     MOV ECX,ESI
005AAD8A  89 46 1F                  MOV dword ptr [ESI + 0x1f],EAX
005AAD8D  E8 90 86 E5 FF            CALL 0x00403422
005AAD92  85 C0                     TEST EAX,EAX
005AAD94  89 46 0B                  MOV dword ptr [ESI + 0xb],EAX
005AAD97  0F 84 EC 00 00 00         JZ 0x005aae89
005AAD9D  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005AADA2  56                        PUSH ESI
005AADA3  6A 00                     PUSH 0x0
005AADA5  6A 00                     PUSH 0x0
005AADA7  8D 7E 03                  LEA EDI,[ESI + 0x3]
005AADAA  68 42 28 40 00            PUSH 0x402842
005AADAF  6A 0A                     PUSH 0xa
005AADB1  57                        PUSH EDI
005AADB2  50                        PUSH EAX
005AADB3  E8 78 75 10 00            CALL 0x006b2330
005AADB8  8B 07                     MOV EAX,dword ptr [EDI]
005AADBA  85 C0                     TEST EAX,EAX
005AADBC  0F 8C C7 00 00 00         JL 0x005aae89
005AADC2  33 C9                     XOR ECX,ECX
005AADC4  8A 4E 01                  MOV CL,byte ptr [ESI + 0x1]
005AADC7  49                        DEC ECX
005AADC8  83 F9 03                  CMP ECX,0x3
005AADCB  77 53                     JA 0x005aae20
switchD_005aadcd::switchD:
005AADCD  FF 24 8D FC AE 5A 00      JMP dword ptr [ECX*0x4 + 0x5aaefc]
switchD_005aadcd::caseD_1:
005AADD4  8B 0D 34 67 80 00         MOV ECX,dword ptr [0x00806734]
005AADDA  8B 56 2B                  MOV EDX,dword ptr [ESI + 0x2b]
005AADDD  51                        PUSH ECX
005AADDE  52                        PUSH EDX
005AADDF  50                        PUSH EAX
005AADE0  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005AADE5  50                        PUSH EAX
005AADE6  E8 15 7A 10 00            CALL 0x006b2800
005AADEB  8B 4E 23                  MOV ECX,dword ptr [ESI + 0x23]
005AADEE  6A 00                     PUSH 0x0
005AADF0  51                        PUSH ECX
005AADF1  EB 1D                     JMP 0x005aae10
switchD_005aadcd::caseD_2:
005AADF3  8B 4E 2F                  MOV ECX,dword ptr [ESI + 0x2f]
005AADF6  8B 15 30 67 80 00         MOV EDX,dword ptr [0x00806730]
005AADFC  51                        PUSH ECX
005AADFD  52                        PUSH EDX
005AADFE  50                        PUSH EAX
005AADFF  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005AAE04  50                        PUSH EAX
005AAE05  E8 F6 79 10 00            CALL 0x006b2800
005AAE0A  8B 4E 27                  MOV ECX,dword ptr [ESI + 0x27]
005AAE0D  51                        PUSH ECX
005AAE0E  6A 00                     PUSH 0x0
LAB_005aae10:
005AAE10  8B 17                     MOV EDX,dword ptr [EDI]
005AAE12  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005AAE17  6A FF                     PUSH -0x1
005AAE19  52                        PUSH EDX
005AAE1A  50                        PUSH EAX
005AAE1B  E8 20 88 10 00            CALL 0x006b3640
switchD_005aadcd::default:
005AAE20  8B 0F                     MOV ECX,dword ptr [EDI]
005AAE22  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005AAE28  51                        PUSH ECX
005AAE29  52                        PUSH EDX
005AAE2A  E8 C1 8C 10 00            CALL 0x006b3af0
005AAE2F  8A 45 20                  MOV AL,byte ptr [EBP + 0x20]
005AAE32  84 C0                     TEST AL,AL
005AAE34  88 46 02                  MOV byte ptr [ESI + 0x2],AL
005AAE37  74 28                     JZ 0x005aae61
005AAE39  8B 46 13                  MOV EAX,dword ptr [ESI + 0x13]
005AAE3C  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
005AAE43  89 46 17                  MOV dword ptr [ESI + 0x17],EAX
005AAE46  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
005AAE49  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005AAE4E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005AAE51  88 06                     MOV byte ptr [ESI],AL
005AAE53  25 FF 00 00 00            AND EAX,0xff
005AAE58  5F                        POP EDI
005AAE59  5E                        POP ESI
005AAE5A  5B                        POP EBX
005AAE5B  8B E5                     MOV ESP,EBP
005AAE5D  5D                        POP EBP
005AAE5E  C2 20 00                  RET 0x20
LAB_005aae61:
005AAE61  83 C8 FF                  OR EAX,0xffffffff
005AAE64  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
005AAE6B  89 46 17                  MOV dword ptr [ESI + 0x17],EAX
005AAE6E  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
005AAE71  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005AAE76  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005AAE79  88 06                     MOV byte ptr [ESI],AL
005AAE7B  25 FF 00 00 00            AND EAX,0xff
005AAE80  5F                        POP EDI
005AAE81  5E                        POP ESI
005AAE82  5B                        POP EBX
005AAE83  8B E5                     MOV ESP,EBP
005AAE85  5D                        POP EBP
005AAE86  C2 20 00                  RET 0x20
LAB_005aae89:
005AAE89  8B CE                     MOV ECX,ESI
005AAE8B  E8 FA 63 E5 FF            CALL 0x0040128a
LAB_005aae90:
005AAE90  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
005AAE93  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005AAE98  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005AAE9B  88 06                     MOV byte ptr [ESI],AL
005AAE9D  25 FF 00 00 00            AND EAX,0xff
005AAEA2  5F                        POP EDI
005AAEA3  5E                        POP ESI
005AAEA4  5B                        POP EBX
005AAEA5  8B E5                     MOV ESP,EBP
005AAEA7  5D                        POP EBP
005AAEA8  C2 20 00                  RET 0x20
LAB_005aaeab:
005AAEAB  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
005AAEAE  68 D0 C6 7C 00            PUSH 0x7cc6d0
005AAEB3  68 CC 4C 7A 00            PUSH 0x7a4ccc
005AAEB8  50                        PUSH EAX
005AAEB9  6A 00                     PUSH 0x0
005AAEBB  68 9A 00 00 00            PUSH 0x9a
005AAEC0  68 74 C6 7C 00            PUSH 0x7cc674
005AAEC5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005AAECB  E8 00 26 10 00            CALL 0x006ad4d0
005AAED0  83 C4 18                  ADD ESP,0x18
005AAED3  85 C0                     TEST EAX,EAX
005AAED5  74 01                     JZ 0x005aaed8
005AAED7  CC                        INT3
LAB_005aaed8:
005AAED8  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005AAEDB  5F                        POP EDI
005AAEDC  88 06                     MOV byte ptr [ESI],AL
005AAEDE  5E                        POP ESI
005AAEDF  25 FF 00 00 00            AND EAX,0xff
005AAEE4  5B                        POP EBX
005AAEE5  8B E5                     MOV ESP,EBP
005AAEE7  5D                        POP EBP
005AAEE8  C2 20 00                  RET 0x20
