FUN_005cbbe0:
005CBBE0  55                        PUSH EBP
005CBBE1  8B EC                     MOV EBP,ESP
005CBBE3  A1 18 76 80 00            MOV EAX,[0x00807618]
005CBBE8  56                        PUSH ESI
005CBBE9  50                        PUSH EAX
005CBBEA  8B F1                     MOV ESI,ECX
005CBBEC  68 40 1F 00 00            PUSH 0x1f40
005CBBF1  E8 4A 45 0E 00            CALL 0x006b0140
005CBBF6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005CBBF9  85 D2                     TEST EDX,EDX
005CBBFB  0F 84 A7 00 00 00         JZ 0x005cbca8
005CBC01  33 C9                     XOR ECX,ECX
005CBC03  8A 4A 04                  MOV CL,byte ptr [EDX + 0x4]
005CBC06  49                        DEC ECX
005CBC07  83 F9 03                  CMP ECX,0x3
005CBC0A  0F 87 98 00 00 00         JA 0x005cbca8
switchD_005cbc10::switchD:
005CBC10  FF 24 8D B0 BC 5C 00      JMP dword ptr [ECX*0x4 + 0x5cbcb0]
switchD_005cbc10::caseD_1:
005CBC17  8A 86 26 1E 00 00         MOV AL,byte ptr [ESI + 0x1e26]
005CBC1D  3C 0C                     CMP AL,0xc
005CBC1F  74 04                     JZ 0x005cbc25
005CBC21  3C 10                     CMP AL,0x10
005CBC23  75 0A                     JNZ 0x005cbc2f
LAB_005cbc25:
005CBC25  80 3A 00                  CMP byte ptr [EDX],0x0
005CBC28  B8 5A 1F 00 00            MOV EAX,0x1f5a
005CBC2D  75 05                     JNZ 0x005cbc34
LAB_005cbc2f:
005CBC2F  B8 41 1F 00 00            MOV EAX,0x1f41
LAB_005cbc34:
005CBC34  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005CBC3A  51                        PUSH ECX
005CBC3B  50                        PUSH EAX
005CBC3C  E8 FF 44 0E 00            CALL 0x006b0140
005CBC41  5E                        POP ESI
005CBC42  5D                        POP EBP
005CBC43  C2 04 00                  RET 0x4
switchD_005cbc10::caseD_2:
005CBC46  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005CBC4C  52                        PUSH EDX
005CBC4D  68 42 1F 00 00            PUSH 0x1f42
005CBC52  E8 E9 44 0E 00            CALL 0x006b0140
005CBC57  5E                        POP ESI
005CBC58  5D                        POP EBP
005CBC59  C2 04 00                  RET 0x4
switchD_005cbc10::caseD_3:
005CBC5C  A1 18 76 80 00            MOV EAX,[0x00807618]
005CBC61  50                        PUSH EAX
005CBC62  68 46 1F 00 00            PUSH 0x1f46
005CBC67  E8 D4 44 0E 00            CALL 0x006b0140
005CBC6C  5E                        POP ESI
005CBC6D  5D                        POP EBP
005CBC6E  C2 04 00                  RET 0x4
switchD_005cbc10::caseD_4:
005CBC71  8B 4A 50                  MOV ECX,dword ptr [EDX + 0x50]
005CBC74  33 C0                     XOR EAX,EAX
005CBC76  8A 42 05                  MOV AL,byte ptr [EDX + 0x5]
005CBC79  8B D0                     MOV EDX,EAX
005CBC7B  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005CBC7E  3B D0                     CMP EDX,EAX
005CBC80  73 15                     JNC 0x005cbc97
005CBC82  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005CBC85  0F AF C2                  IMUL EAX,EDX
005CBC88  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
005CBC8B  85 C0                     TEST EAX,EAX
005CBC8D  74 08                     JZ 0x005cbc97
005CBC8F  83 C0 40                  ADD EAX,0x40
005CBC92  5E                        POP ESI
005CBC93  5D                        POP EBP
005CBC94  C2 04 00                  RET 0x4
LAB_005cbc97:
005CBC97  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005CBC9D  51                        PUSH ECX
005CBC9E  68 10 27 00 00            PUSH 0x2710
005CBCA3  E8 98 44 0E 00            CALL 0x006b0140
switchD_005cbc10::default:
005CBCA8  5E                        POP ESI
005CBCA9  5D                        POP EBP
005CBCAA  C2 04 00                  RET 0x4
