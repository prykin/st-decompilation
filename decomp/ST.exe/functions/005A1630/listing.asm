FUN_005a1630:
005A1630  55                        PUSH EBP
005A1631  8B EC                     MOV EBP,ESP
005A1633  83 EC 68                  SUB ESP,0x68
005A1636  8A 81 5F 1A 00 00         MOV AL,byte ptr [ECX + 0x1a5f]
005A163C  53                        PUSH EBX
005A163D  BB 01 00 00 00            MOV EBX,0x1
005A1642  56                        PUSH ESI
005A1643  3A C3                     CMP AL,BL
005A1645  57                        PUSH EDI
005A1646  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005A1649  0F 85 1F 02 00 00         JNZ 0x005a186e
005A164F  8B 81 C0 1A 00 00         MOV EAX,dword ptr [ECX + 0x1ac0]
005A1655  85 C0                     TEST EAX,EAX
005A1657  0F 84 11 02 00 00         JZ 0x005a186e
005A165D  8B 81 BC 1A 00 00         MOV EAX,dword ptr [ECX + 0x1abc]
005A1663  85 C0                     TEST EAX,EAX
005A1665  0F 8C 03 02 00 00         JL 0x005a186e
005A166B  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005A1670  8D 55 9C                  LEA EDX,[EBP + -0x64]
005A1673  8D 4D 98                  LEA ECX,[EBP + -0x68]
005A1676  6A 00                     PUSH 0x0
005A1678  52                        PUSH EDX
005A1679  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
005A167C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A1682  E8 69 C1 18 00            CALL 0x0072d7f0
005A1687  8B F0                     MOV ESI,EAX
005A1689  83 C4 08                  ADD ESP,0x8
005A168C  85 F6                     TEST ESI,ESI
005A168E  0F 85 9B 01 00 00         JNZ 0x005a182f
005A1694  8B 35 30 2A 80 00         MOV ESI,dword ptr [0x00802a30]
005A169A  85 F6                     TEST ESI,ESI
005A169C  74 4C                     JZ 0x005a16ea
005A169E  8B 86 C9 00 00 00         MOV EAX,dword ptr [ESI + 0xc9]
005A16A4  8B 8E C5 00 00 00         MOV ECX,dword ptr [ESI + 0xc5]
005A16AA  50                        PUSH EAX
005A16AB  51                        PUSH ECX
005A16AC  6A 00                     PUSH 0x0
005A16AE  8B CE                     MOV ECX,ESI
005A16B0  88 9E 93 04 00 00         MOV byte ptr [ESI + 0x493],BL
005A16B6  66 C7 86 94 04 00 00 FF FF  MOV word ptr [ESI + 0x494],0xffff
005A16BF  E8 BA 39 E6 FF            CALL 0x0040507e
005A16C4  8B 96 C9 00 00 00         MOV EDX,dword ptr [ESI + 0xc9]
005A16CA  8B 86 C5 00 00 00         MOV EAX,dword ptr [ESI + 0xc5]
005A16D0  52                        PUSH EDX
005A16D1  50                        PUSH EAX
005A16D2  8B CE                     MOV ECX,ESI
005A16D4  E8 45 0D E6 FF            CALL 0x0040241e
005A16D9  C6 86 D2 00 00 00 00      MOV byte ptr [ESI + 0xd2],0x0
005A16E0  C7 86 DF 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4df],0xffffffff
LAB_005a16ea:
005A16EA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005A16ED  85 C0                     TEST EAX,EAX
005A16EF  74 2E                     JZ 0x005a171f
005A16F1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005A16F4  89 1D 76 FB 80 00         MOV dword ptr [0x0080fb76],EBX
005A16FA  8D 51 3D                  LEA EDX,[ECX + 0x3d]
005A16FD  C7 41 4D 02 71 00 00      MOV dword ptr [ECX + 0x4d],0x7102
005A1704  52                        PUSH EDX
005A1705  89 59 49                  MOV dword ptr [ECX + 0x49],EBX
005A1708  E8 13 49 14 00            CALL 0x006e6020
005A170D  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
005A1710  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A1716  5F                        POP EDI
005A1717  5E                        POP ESI
005A1718  5B                        POP EBX
005A1719  8B E5                     MOV ESP,EBP
005A171B  5D                        POP EBP
005A171C  C2 04 00                  RET 0x4
LAB_005a171f:
005A171F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005A1722  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
005A1728  8B 58 14                  MOV EBX,dword ptr [EAX + 0x14]
005A172B  85 DB                     TEST EBX,EBX
005A172D  75 18                     JNZ 0x005a1747
005A172F  66 8B 58 0E               MOV BX,word ptr [EAX + 0xe]
005A1733  0F AF 58 04               IMUL EBX,dword ptr [EAX + 0x4]
005A1737  83 C3 1F                  ADD EBX,0x1f
005A173A  C1 EB 03                  SHR EBX,0x3
005A173D  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
005A1743  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
LAB_005a1747:
005A1747  50                        PUSH EAX
005A1748  E8 53 38 11 00            CALL 0x006b4fa0
005A174D  8B CB                     MOV ECX,EBX
005A174F  8B F8                     MOV EDI,EAX
005A1751  8B D1                     MOV EDX,ECX
005A1753  83 C8 FF                  OR EAX,0xffffffff
005A1756  C1 E9 02                  SHR ECX,0x2
005A1759  F3 AB                     STOSD.REP ES:EDI
005A175B  8B CA                     MOV ECX,EDX
005A175D  68 F0 00 00 00            PUSH 0xf0
005A1762  83 E1 03                  AND ECX,0x3
005A1765  68 B8 01 00 00            PUSH 0x1b8
005A176A  F3 AA                     STOSB.REP ES:EDI
005A176C  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
005A1772  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
005A1778  6A 16                     PUSH 0x16
005A177A  6A 00                     PUSH 0x0
005A177C  6A 00                     PUSH 0x0
005A177E  50                        PUSH EAX
005A177F  E8 0C F3 16 00            CALL 0x00710a90
005A1784  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005A178A  6A FF                     PUSH -0x1
005A178C  6A FF                     PUSH -0x1
005A178E  6A 02                     PUSH 0x2
005A1790  6A FF                     PUSH -0x1
005A1792  6A FE                     PUSH -0x2
005A1794  51                        PUSH ECX
005A1795  68 B9 25 00 00            PUSH 0x25b9
005A179A  E8 A1 E9 10 00            CALL 0x006b0140
005A179F  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
005A17A5  50                        PUSH EAX
005A17A6  E8 C5 03 17 00            CALL 0x00711b70
005A17AB  8B 96 BC 1A 00 00         MOV EDX,dword ptr [ESI + 0x1abc]
005A17B1  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005A17B6  52                        PUSH EDX
005A17B7  50                        PUSH EAX
005A17B8  E8 13 1E 11 00            CALL 0x006b35d0
005A17BD  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
005A17C3  B9 08 00 00 00            MOV ECX,0x8
005A17C8  33 C0                     XOR EAX,EAX
005A17CA  8D 7D DC                  LEA EDI,[EBP + -0x24]
005A17CD  F3 AB                     STOSD.REP ES:EDI
005A17CF  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
005A17D2  C7 45 E8 02 00 00 00      MOV dword ptr [EBP + -0x18],0x2
005A17D9  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
005A17DC  C7 45 EC 56 69 00 00      MOV dword ptr [EBP + -0x14],0x6956
005A17E3  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005A17E9  85 C9                     TEST ECX,ECX
005A17EB  74 26                     JZ 0x005a1813
005A17ED  50                        PUSH EAX
005A17EE  50                        PUSH EAX
005A17EF  50                        PUSH EAX
005A17F0  50                        PUSH EAX
005A17F1  8D 45 DC                  LEA EAX,[EBP + -0x24]
005A17F4  50                        PUSH EAX
005A17F5  6A 00                     PUSH 0x0
005A17F7  68 BC 25 00 00            PUSH 0x25bc
005A17FC  E8 A7 27 E6 FF            CALL 0x00403fa8
005A1801  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
005A1804  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A180A  5F                        POP EDI
005A180B  5E                        POP ESI
005A180C  5B                        POP EBX
005A180D  8B E5                     MOV ESP,EBP
005A180F  5D                        POP EBP
005A1810  C2 04 00                  RET 0x4
LAB_005a1813:
005A1813  8B 16                     MOV EDX,dword ptr [ESI]
005A1815  8D 45 DC                  LEA EAX,[EBP + -0x24]
005A1818  50                        PUSH EAX
005A1819  8B CE                     MOV ECX,ESI
005A181B  FF 12                     CALL dword ptr [EDX]
005A181D  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
005A1820  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A1826  5F                        POP EDI
005A1827  5E                        POP ESI
005A1828  5B                        POP EBX
005A1829  8B E5                     MOV ESP,EBP
005A182B  5D                        POP EBP
005A182C  C2 04 00                  RET 0x4
LAB_005a182f:
005A182F  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
005A1832  68 48 C4 7C 00            PUSH 0x7cc448
005A1837  68 CC 4C 7A 00            PUSH 0x7a4ccc
005A183C  56                        PUSH ESI
005A183D  6A 00                     PUSH 0x0
005A183F  68 5B 09 00 00            PUSH 0x95b
005A1844  68 70 BF 7C 00            PUSH 0x7cbf70
005A1849  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005A184F  E8 7C BC 10 00            CALL 0x006ad4d0
005A1854  83 C4 18                  ADD ESP,0x18
005A1857  85 C0                     TEST EAX,EAX
005A1859  74 01                     JZ 0x005a185c
005A185B  CC                        INT3
LAB_005a185c:
005A185C  68 5B 09 00 00            PUSH 0x95b
005A1861  68 70 BF 7C 00            PUSH 0x7cbf70
005A1866  6A 00                     PUSH 0x0
005A1868  56                        PUSH ESI
005A1869  E8 D2 45 10 00            CALL 0x006a5e40
LAB_005a186e:
005A186E  5F                        POP EDI
005A186F  5E                        POP ESI
005A1870  5B                        POP EBX
005A1871  8B E5                     MOV ESP,EBP
005A1873  5D                        POP EBP
005A1874  C2 04 00                  RET 0x4
