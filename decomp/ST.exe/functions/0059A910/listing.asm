FSGSTy::PaintInfo:
0059A910  55                        PUSH EBP
0059A911  8B EC                     MOV EBP,ESP
0059A913  83 EC 48                  SUB ESP,0x48
0059A916  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0059A91B  53                        PUSH EBX
0059A91C  56                        PUSH ESI
0059A91D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0059A920  57                        PUSH EDI
0059A921  8D 55 BC                  LEA EDX,[EBP + -0x44]
0059A924  8D 4D B8                  LEA ECX,[EBP + -0x48]
0059A927  6A 00                     PUSH 0x0
0059A929  52                        PUSH EDX
0059A92A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0059A92D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0059A933  E8 B8 2E 19 00            CALL 0x0072d7f0
0059A938  8B F0                     MOV ESI,EAX
0059A93A  83 C4 08                  ADD ESP,0x8
0059A93D  85 F6                     TEST ESI,ESI
0059A93F  0F 85 42 07 00 00         JNZ 0x0059b087
0059A945  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0059A948  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
0059A94E  8B 58 14                  MOV EBX,dword ptr [EAX + 0x14]
0059A951  85 DB                     TEST EBX,EBX
0059A953  75 18                     JNZ 0x0059a96d
0059A955  66 8B 58 0E               MOV BX,word ptr [EAX + 0xe]
0059A959  0F AF 58 04               IMUL EBX,dword ptr [EAX + 0x4]
0059A95D  83 C3 1F                  ADD EBX,0x1f
0059A960  C1 EB 03                  SHR EBX,0x3
0059A963  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
0059A969  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
LAB_0059a96d:
0059A96D  50                        PUSH EAX
0059A96E  E8 2D A6 11 00            CALL 0x006b4fa0
0059A973  8B CB                     MOV ECX,EBX
0059A975  8B F8                     MOV EDI,EAX
0059A977  8B D1                     MOV EDX,ECX
0059A979  83 C8 FF                  OR EAX,0xffffffff
0059A97C  C1 E9 02                  SHR ECX,0x2
0059A97F  F3 AB                     STOSD.REP ES:EDI
0059A981  8B CA                     MOV ECX,EDX
0059A983  6A 14                     PUSH 0x14
0059A985  83 E1 03                  AND ECX,0x3
0059A988  68 86 01 00 00            PUSH 0x186
0059A98D  F3 AA                     STOSB.REP ES:EDI
0059A98F  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
0059A995  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059A99B  6A 1B                     PUSH 0x1b
0059A99D  6A 19                     PUSH 0x19
0059A99F  6A 00                     PUSH 0x0
0059A9A1  50                        PUSH EAX
0059A9A2  E8 E9 60 17 00            CALL 0x00710a90
0059A9A7  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0059A9AD  6A 02                     PUSH 0x2
0059A9AF  6A FF                     PUSH -0x1
0059A9B1  6A 00                     PUSH 0x0
0059A9B3  51                        PUSH ECX
0059A9B4  68 4F 25 00 00            PUSH 0x254f
0059A9B9  E8 82 57 11 00            CALL 0x006b0140
0059A9BE  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059A9C4  50                        PUSH EAX
0059A9C5  E8 F6 6F 17 00            CALL 0x007119c0
0059A9CA  8B 96 C0 1A 00 00         MOV EDX,dword ptr [ESI + 0x1ac0]
0059A9D0  6A 0D                     PUSH 0xd
0059A9D2  6A 0F                     PUSH 0xf
0059A9D4  6A 16                     PUSH 0x16
0059A9D6  68 88 01 00 00            PUSH 0x188
0059A9DB  6A 2E                     PUSH 0x2e
0059A9DD  6A 18                     PUSH 0x18
0059A9DF  6A 00                     PUSH 0x0
0059A9E1  52                        PUSH EDX
0059A9E2  E8 F9 B4 11 00            CALL 0x006b5ee0
0059A9E7  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
0059A9ED  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059A9F3  6A 14                     PUSH 0x14
0059A9F5  68 7C 01 00 00            PUSH 0x17c
0059A9FA  6A 2E                     PUSH 0x2e
0059A9FC  6A 1E                     PUSH 0x1e
0059A9FE  6A 00                     PUSH 0x0
0059AA00  50                        PUSH EAX
0059AA01  E8 8A 60 17 00            CALL 0x00710a90
0059AA06  8B 8E 0C 1B 00 00         MOV ECX,dword ptr [ESI + 0x1b0c]
0059AA0C  6A 00                     PUSH 0x0
0059AA0E  6A FF                     PUSH -0x1
0059AA10  6A 00                     PUSH 0x0
0059AA12  51                        PUSH ECX
0059AA13  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059AA19  E8 A2 6F 17 00            CALL 0x007119c0
0059AA1E  8B 96 C0 1A 00 00         MOV EDX,dword ptr [ESI + 0x1ac0]
0059AA24  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059AA2A  6A 14                     PUSH 0x14
0059AA2C  6A 6E                     PUSH 0x6e
0059AA2E  6A 43                     PUSH 0x43
0059AA30  6A 19                     PUSH 0x19
0059AA32  6A 00                     PUSH 0x0
0059AA34  52                        PUSH EDX
0059AA35  E8 56 60 17 00            CALL 0x00710a90
0059AA3A  A1 18 76 80 00            MOV EAX,[0x00807618]
0059AA3F  6A 02                     PUSH 0x2
0059AA41  6A FF                     PUSH -0x1
0059AA43  6A 00                     PUSH 0x0
0059AA45  50                        PUSH EAX
0059AA46  68 57 25 00 00            PUSH 0x2557
0059AA4B  E8 F0 56 11 00            CALL 0x006b0140
0059AA50  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059AA56  50                        PUSH EAX
0059AA57  E8 64 6F 17 00            CALL 0x007119c0
0059AA5C  6A 0D                     PUSH 0xd
0059AA5E  6A 0F                     PUSH 0xf
0059AA60  6A 16                     PUSH 0x16
0059AA62  6A 70                     PUSH 0x70
0059AA64  6A 56                     PUSH 0x56
0059AA66  6A 18                     PUSH 0x18
0059AA68  8B 8E C0 1A 00 00         MOV ECX,dword ptr [ESI + 0x1ac0]
0059AA6E  6A 00                     PUSH 0x0
0059AA70  51                        PUSH ECX
0059AA71  E8 6A B4 11 00            CALL 0x006b5ee0
0059AA76  8B 96 C0 1A 00 00         MOV EDX,dword ptr [ESI + 0x1ac0]
0059AA7C  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059AA82  6A 14                     PUSH 0x14
0059AA84  6A 6E                     PUSH 0x6e
0059AA86  6A 43                     PUSH 0x43
0059AA88  68 A5 00 00 00            PUSH 0xa5
0059AA8D  6A 00                     PUSH 0x0
0059AA8F  52                        PUSH EDX
0059AA90  E8 FB 5F 17 00            CALL 0x00710a90
0059AA95  A1 18 76 80 00            MOV EAX,[0x00807618]
0059AA9A  6A 02                     PUSH 0x2
0059AA9C  6A FF                     PUSH -0x1
0059AA9E  6A 00                     PUSH 0x0
0059AAA0  50                        PUSH EAX
0059AAA1  68 58 25 00 00            PUSH 0x2558
0059AAA6  E8 95 56 11 00            CALL 0x006b0140
0059AAAB  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059AAB1  50                        PUSH EAX
0059AAB2  E8 09 6F 17 00            CALL 0x007119c0
0059AAB7  8B 8E C0 1A 00 00         MOV ECX,dword ptr [ESI + 0x1ac0]
0059AABD  6A 0D                     PUSH 0xd
0059AABF  6A 0F                     PUSH 0xf
0059AAC1  6A 16                     PUSH 0x16
0059AAC3  6A 70                     PUSH 0x70
0059AAC5  6A 56                     PUSH 0x56
0059AAC7  68 A4 00 00 00            PUSH 0xa4
0059AACC  6A 00                     PUSH 0x0
0059AACE  51                        PUSH ECX
0059AACF  E8 0C B4 11 00            CALL 0x006b5ee0
0059AAD4  8B 96 C0 1A 00 00         MOV EDX,dword ptr [ESI + 0x1ac0]
0059AADA  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059AAE0  6A 14                     PUSH 0x14
0059AAE2  6A 6E                     PUSH 0x6e
0059AAE4  6A 43                     PUSH 0x43
0059AAE6  68 31 01 00 00            PUSH 0x131
0059AAEB  6A 00                     PUSH 0x0
0059AAED  52                        PUSH EDX
0059AAEE  E8 9D 5F 17 00            CALL 0x00710a90
0059AAF3  A1 18 76 80 00            MOV EAX,[0x00807618]
0059AAF8  6A 02                     PUSH 0x2
0059AAFA  6A FF                     PUSH -0x1
0059AAFC  6A 00                     PUSH 0x0
0059AAFE  50                        PUSH EAX
0059AAFF  68 59 25 00 00            PUSH 0x2559
0059AB04  E8 37 56 11 00            CALL 0x006b0140
0059AB09  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059AB0F  50                        PUSH EAX
0059AB10  E8 AB 6E 17 00            CALL 0x007119c0
0059AB15  8B 8E C0 1A 00 00         MOV ECX,dword ptr [ESI + 0x1ac0]
0059AB1B  6A 0D                     PUSH 0xd
0059AB1D  6A 0F                     PUSH 0xf
0059AB1F  6A 16                     PUSH 0x16
0059AB21  6A 70                     PUSH 0x70
0059AB23  6A 56                     PUSH 0x56
0059AB25  68 30 01 00 00            PUSH 0x130
0059AB2A  6A 00                     PUSH 0x0
0059AB2C  51                        PUSH ECX
0059AB2D  E8 AE B3 11 00            CALL 0x006b5ee0
0059AB32  8B 96 C0 1A 00 00         MOV EDX,dword ptr [ESI + 0x1ac0]
0059AB38  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059AB3E  6A 14                     PUSH 0x14
0059AB40  68 86 01 00 00            PUSH 0x186
0059AB45  6A 6B                     PUSH 0x6b
0059AB47  6A 19                     PUSH 0x19
0059AB49  6A 00                     PUSH 0x0
0059AB4B  52                        PUSH EDX
0059AB4C  E8 3F 5F 17 00            CALL 0x00710a90
0059AB51  A1 18 76 80 00            MOV EAX,[0x00807618]
0059AB56  6A 02                     PUSH 0x2
0059AB58  6A FF                     PUSH -0x1
0059AB5A  6A 00                     PUSH 0x0
0059AB5C  50                        PUSH EAX
0059AB5D  68 5A 25 00 00            PUSH 0x255a
0059AB62  E8 D9 55 11 00            CALL 0x006b0140
0059AB67  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059AB6D  50                        PUSH EAX
0059AB6E  E8 4D 6E 17 00            CALL 0x007119c0
0059AB73  8B 8E C0 1A 00 00         MOV ECX,dword ptr [ESI + 0x1ac0]
0059AB79  6A 0D                     PUSH 0xd
0059AB7B  6A 0F                     PUSH 0xf
0059AB7D  6A 4D                     PUSH 0x4d
0059AB7F  68 88 01 00 00            PUSH 0x188
0059AB84  6A 7E                     PUSH 0x7e
0059AB86  6A 18                     PUSH 0x18
0059AB88  6A 00                     PUSH 0x0
0059AB8A  51                        PUSH ECX
0059AB8B  E8 50 B3 11 00            CALL 0x006b5ee0
0059AB90  8B 96 C0 1A 00 00         MOV EDX,dword ptr [ESI + 0x1ac0]
0059AB96  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059AB9C  6A 14                     PUSH 0x14
0059AB9E  68 86 01 00 00            PUSH 0x186
0059ABA3  68 CF 00 00 00            PUSH 0xcf
0059ABA8  6A 19                     PUSH 0x19
0059ABAA  6A 00                     PUSH 0x0
0059ABAC  52                        PUSH EDX
0059ABAD  E8 DE 5E 17 00            CALL 0x00710a90
0059ABB2  A1 18 76 80 00            MOV EAX,[0x00807618]
0059ABB7  6A 00                     PUSH 0x0
0059ABB9  6A FF                     PUSH -0x1
0059ABBB  6A FF                     PUSH -0x1
0059ABBD  50                        PUSH EAX
0059ABBE  68 9D 25 00 00            PUSH 0x259d
0059ABC3  E8 78 55 11 00            CALL 0x006b0140
0059ABC8  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059ABCE  50                        PUSH EAX
0059ABCF  E8 EC 6D 17 00            CALL 0x007119c0
0059ABD4  8B 8E C0 1A 00 00         MOV ECX,dword ptr [ESI + 0x1ac0]
0059ABDA  6A 14                     PUSH 0x14
0059ABDC  6A 50                     PUSH 0x50
0059ABDE  68 DE 00 00 00            PUSH 0xde
0059ABE3  6A 19                     PUSH 0x19
0059ABE5  6A 00                     PUSH 0x0
0059ABE7  51                        PUSH ECX
0059ABE8  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059ABEE  E8 9D 5E 17 00            CALL 0x00710a90
0059ABF3  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0059ABF9  6A 02                     PUSH 0x2
0059ABFB  6A FF                     PUSH -0x1
0059ABFD  6A 00                     PUSH 0x0
0059ABFF  52                        PUSH EDX
0059AC00  68 9F 25 00 00            PUSH 0x259f
0059AC05  E8 36 55 11 00            CALL 0x006b0140
0059AC0A  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059AC10  50                        PUSH EAX
0059AC11  E8 AA 6D 17 00            CALL 0x007119c0
0059AC16  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
0059AC1C  6A 0D                     PUSH 0xd
0059AC1E  6A 0F                     PUSH 0xf
0059AC20  6A 14                     PUSH 0x14
0059AC22  6A 52                     PUSH 0x52
0059AC24  68 F2 00 00 00            PUSH 0xf2
0059AC29  6A 18                     PUSH 0x18
0059AC2B  6A 00                     PUSH 0x0
0059AC2D  50                        PUSH EAX
0059AC2E  E8 AD B2 11 00            CALL 0x006b5ee0
0059AC33  8B 8E C0 1A 00 00         MOV ECX,dword ptr [ESI + 0x1ac0]
0059AC39  6A 14                     PUSH 0x14
0059AC3B  6A 50                     PUSH 0x50
0059AC3D  68 DE 00 00 00            PUSH 0xde
0059AC42  6A 7D                     PUSH 0x7d
0059AC44  6A 00                     PUSH 0x0
0059AC46  51                        PUSH ECX
0059AC47  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059AC4D  E8 3E 5E 17 00            CALL 0x00710a90
0059AC52  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0059AC58  6A 02                     PUSH 0x2
0059AC5A  6A FF                     PUSH -0x1
0059AC5C  6A 00                     PUSH 0x0
0059AC5E  52                        PUSH EDX
0059AC5F  68 A0 25 00 00            PUSH 0x25a0
0059AC64  E8 D7 54 11 00            CALL 0x006b0140
0059AC69  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059AC6F  50                        PUSH EAX
0059AC70  E8 4B 6D 17 00            CALL 0x007119c0
0059AC75  6A 0D                     PUSH 0xd
0059AC77  6A 0F                     PUSH 0xf
0059AC79  6A 14                     PUSH 0x14
0059AC7B  6A 52                     PUSH 0x52
0059AC7D  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
0059AC83  68 F2 00 00 00            PUSH 0xf2
0059AC88  6A 7C                     PUSH 0x7c
0059AC8A  6A 00                     PUSH 0x0
0059AC8C  50                        PUSH EAX
0059AC8D  E8 4E B2 11 00            CALL 0x006b5ee0
0059AC92  8B 8E C0 1A 00 00         MOV ECX,dword ptr [ESI + 0x1ac0]
0059AC98  6A 14                     PUSH 0x14
0059AC9A  6A 50                     PUSH 0x50
0059AC9C  68 DE 00 00 00            PUSH 0xde
0059ACA1  68 E1 00 00 00            PUSH 0xe1
0059ACA6  6A 00                     PUSH 0x0
0059ACA8  51                        PUSH ECX
0059ACA9  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059ACAF  E8 DC 5D 17 00            CALL 0x00710a90
0059ACB4  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0059ACBA  6A 02                     PUSH 0x2
0059ACBC  6A FF                     PUSH -0x1
0059ACBE  6A 00                     PUSH 0x0
0059ACC0  52                        PUSH EDX
0059ACC1  68 A5 25 00 00            PUSH 0x25a5
0059ACC6  E8 75 54 11 00            CALL 0x006b0140
0059ACCB  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059ACD1  50                        PUSH EAX
0059ACD2  E8 E9 6C 17 00            CALL 0x007119c0
0059ACD7  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
0059ACDD  6A 0D                     PUSH 0xd
0059ACDF  6A 0F                     PUSH 0xf
0059ACE1  6A 14                     PUSH 0x14
0059ACE3  6A 52                     PUSH 0x52
0059ACE5  68 F2 00 00 00            PUSH 0xf2
0059ACEA  68 E0 00 00 00            PUSH 0xe0
0059ACEF  6A 00                     PUSH 0x0
0059ACF1  50                        PUSH EAX
0059ACF2  E8 E9 B1 11 00            CALL 0x006b5ee0
0059ACF7  8B 8E C0 1A 00 00         MOV ECX,dword ptr [ESI + 0x1ac0]
0059ACFD  6A 14                     PUSH 0x14
0059ACFF  6A 50                     PUSH 0x50
0059AD01  68 DE 00 00 00            PUSH 0xde
0059AD06  68 45 01 00 00            PUSH 0x145
0059AD0B  6A 00                     PUSH 0x0
0059AD0D  51                        PUSH ECX
0059AD0E  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059AD14  E8 77 5D 17 00            CALL 0x00710a90
0059AD19  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0059AD1F  6A 02                     PUSH 0x2
0059AD21  6A FF                     PUSH -0x1
0059AD23  6A 00                     PUSH 0x0
0059AD25  52                        PUSH EDX
0059AD26  68 A1 25 00 00            PUSH 0x25a1
0059AD2B  E8 10 54 11 00            CALL 0x006b0140
0059AD30  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059AD36  50                        PUSH EAX
0059AD37  E8 84 6C 17 00            CALL 0x007119c0
0059AD3C  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
0059AD42  6A 0D                     PUSH 0xd
0059AD44  6A 0F                     PUSH 0xf
0059AD46  6A 14                     PUSH 0x14
0059AD48  6A 52                     PUSH 0x52
0059AD4A  68 F2 00 00 00            PUSH 0xf2
0059AD4F  68 44 01 00 00            PUSH 0x144
0059AD54  6A 00                     PUSH 0x0
0059AD56  50                        PUSH EAX
0059AD57  E8 84 B1 11 00            CALL 0x006b5ee0
0059AD5C  8B 8E C0 1A 00 00         MOV ECX,dword ptr [ESI + 0x1ac0]
0059AD62  6A 14                     PUSH 0x14
0059AD64  6A 50                     PUSH 0x50
0059AD66  68 06 01 00 00            PUSH 0x106
0059AD6B  6A 19                     PUSH 0x19
0059AD6D  6A 00                     PUSH 0x0
0059AD6F  51                        PUSH ECX
0059AD70  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059AD76  E8 15 5D 17 00            CALL 0x00710a90
0059AD7B  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0059AD81  6A 02                     PUSH 0x2
0059AD83  6A FF                     PUSH -0x1
0059AD85  6A 00                     PUSH 0x0
0059AD87  52                        PUSH EDX
0059AD88  68 A4 25 00 00            PUSH 0x25a4
0059AD8D  E8 AE 53 11 00            CALL 0x006b0140
0059AD92  50                        PUSH EAX
0059AD93  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059AD99  E8 22 6C 17 00            CALL 0x007119c0
0059AD9E  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
0059ADA4  6A 0D                     PUSH 0xd
0059ADA6  6A 0F                     PUSH 0xf
0059ADA8  6A 19                     PUSH 0x19
0059ADAA  6A 52                     PUSH 0x52
0059ADAC  68 1A 01 00 00            PUSH 0x11a
0059ADB1  6A 18                     PUSH 0x18
0059ADB3  6A 00                     PUSH 0x0
0059ADB5  50                        PUSH EAX
0059ADB6  E8 25 B1 11 00            CALL 0x006b5ee0
0059ADBB  8B 8E C0 1A 00 00         MOV ECX,dword ptr [ESI + 0x1ac0]
0059ADC1  6A 14                     PUSH 0x14
0059ADC3  6A 50                     PUSH 0x50
0059ADC5  68 06 01 00 00            PUSH 0x106
0059ADCA  6A 7D                     PUSH 0x7d
0059ADCC  6A 00                     PUSH 0x0
0059ADCE  51                        PUSH ECX
0059ADCF  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059ADD5  E8 B6 5C 17 00            CALL 0x00710a90
0059ADDA  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0059ADE0  6A 02                     PUSH 0x2
0059ADE2  6A FF                     PUSH -0x1
0059ADE4  6A 00                     PUSH 0x0
0059ADE6  52                        PUSH EDX
0059ADE7  68 A3 25 00 00            PUSH 0x25a3
0059ADEC  E8 4F 53 11 00            CALL 0x006b0140
0059ADF1  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059ADF7  50                        PUSH EAX
0059ADF8  E8 C3 6B 17 00            CALL 0x007119c0
0059ADFD  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
0059AE03  6A 0D                     PUSH 0xd
0059AE05  6A 0F                     PUSH 0xf
0059AE07  6A 19                     PUSH 0x19
0059AE09  6A 52                     PUSH 0x52
0059AE0B  68 1A 01 00 00            PUSH 0x11a
0059AE10  6A 7C                     PUSH 0x7c
0059AE12  6A 00                     PUSH 0x0
0059AE14  50                        PUSH EAX
0059AE15  E8 C6 B0 11 00            CALL 0x006b5ee0
0059AE1A  8B 8E C0 1A 00 00         MOV ECX,dword ptr [ESI + 0x1ac0]
0059AE20  6A 14                     PUSH 0x14
0059AE22  68 B4 00 00 00            PUSH 0xb4
0059AE27  68 06 01 00 00            PUSH 0x106
0059AE2C  68 E1 00 00 00            PUSH 0xe1
0059AE31  6A 00                     PUSH 0x0
0059AE33  51                        PUSH ECX
0059AE34  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059AE3A  E8 51 5C 17 00            CALL 0x00710a90
0059AE3F  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0059AE45  6A 02                     PUSH 0x2
0059AE47  6A FF                     PUSH -0x1
0059AE49  6A 00                     PUSH 0x0
0059AE4B  52                        PUSH EDX
0059AE4C  68 A2 25 00 00            PUSH 0x25a2
0059AE51  E8 EA 52 11 00            CALL 0x006b0140
0059AE56  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059AE5C  50                        PUSH EAX
0059AE5D  E8 5E 6B 17 00            CALL 0x007119c0
0059AE62  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
0059AE68  6A 0D                     PUSH 0xd
0059AE6A  6A 0F                     PUSH 0xf
0059AE6C  6A 19                     PUSH 0x19
0059AE6E  68 B6 00 00 00            PUSH 0xb6
0059AE73  68 1A 01 00 00            PUSH 0x11a
0059AE78  68 E0 00 00 00            PUSH 0xe0
0059AE7D  6A 00                     PUSH 0x0
0059AE7F  50                        PUSH EAX
0059AE80  E8 5B B0 11 00            CALL 0x006b5ee0
0059AE85  8B 8E C0 1A 00 00         MOV ECX,dword ptr [ESI + 0x1ac0]
0059AE8B  6A 14                     PUSH 0x14
0059AE8D  68 86 01 00 00            PUSH 0x186
0059AE92  68 3D 01 00 00            PUSH 0x13d
0059AE97  6A 19                     PUSH 0x19
0059AE99  6A 00                     PUSH 0x0
0059AE9B  51                        PUSH ECX
0059AE9C  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059AEA2  E8 E9 5B 17 00            CALL 0x00710a90
0059AEA7  6A 00                     PUSH 0x0
0059AEA9  6A FF                     PUSH -0x1
0059AEAB  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0059AEB1  6A FF                     PUSH -0x1
0059AEB3  52                        PUSH EDX
0059AEB4  68 9E 25 00 00            PUSH 0x259e
0059AEB9  E8 82 52 11 00            CALL 0x006b0140
0059AEBE  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059AEC4  50                        PUSH EAX
0059AEC5  E8 F6 6A 17 00            CALL 0x007119c0
0059AECA  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
0059AED0  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059AED6  6A 14                     PUSH 0x14
0059AED8  6A 50                     PUSH 0x50
0059AEDA  68 4C 01 00 00            PUSH 0x14c
0059AEDF  6A 19                     PUSH 0x19
0059AEE1  6A 00                     PUSH 0x0
0059AEE3  50                        PUSH EAX
0059AEE4  E8 A7 5B 17 00            CALL 0x00710a90
0059AEE9  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0059AEEF  6A 02                     PUSH 0x2
0059AEF1  6A FF                     PUSH -0x1
0059AEF3  6A 00                     PUSH 0x0
0059AEF5  51                        PUSH ECX
0059AEF6  68 9F 25 00 00            PUSH 0x259f
0059AEFB  E8 40 52 11 00            CALL 0x006b0140
0059AF00  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059AF06  50                        PUSH EAX
0059AF07  E8 B4 6A 17 00            CALL 0x007119c0
0059AF0C  8B 96 C0 1A 00 00         MOV EDX,dword ptr [ESI + 0x1ac0]
0059AF12  6A 0D                     PUSH 0xd
0059AF14  6A 0F                     PUSH 0xf
0059AF16  6A 14                     PUSH 0x14
0059AF18  6A 52                     PUSH 0x52
0059AF1A  68 60 01 00 00            PUSH 0x160
0059AF1F  6A 18                     PUSH 0x18
0059AF21  6A 00                     PUSH 0x0
0059AF23  52                        PUSH EDX
0059AF24  E8 B7 AF 11 00            CALL 0x006b5ee0
0059AF29  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
0059AF2F  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059AF35  6A 14                     PUSH 0x14
0059AF37  6A 50                     PUSH 0x50
0059AF39  68 4C 01 00 00            PUSH 0x14c
0059AF3E  6A 7D                     PUSH 0x7d
0059AF40  6A 00                     PUSH 0x0
0059AF42  50                        PUSH EAX
0059AF43  E8 48 5B 17 00            CALL 0x00710a90
0059AF48  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0059AF4E  6A 02                     PUSH 0x2
0059AF50  6A FF                     PUSH -0x1
0059AF52  6A 00                     PUSH 0x0
0059AF54  51                        PUSH ECX
0059AF55  68 A0 25 00 00            PUSH 0x25a0
0059AF5A  E8 E1 51 11 00            CALL 0x006b0140
0059AF5F  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059AF65  50                        PUSH EAX
0059AF66  E8 55 6A 17 00            CALL 0x007119c0
0059AF6B  8B 96 C0 1A 00 00         MOV EDX,dword ptr [ESI + 0x1ac0]
0059AF71  6A 0D                     PUSH 0xd
0059AF73  6A 0F                     PUSH 0xf
0059AF75  6A 14                     PUSH 0x14
0059AF77  6A 52                     PUSH 0x52
0059AF79  68 60 01 00 00            PUSH 0x160
0059AF7E  6A 7C                     PUSH 0x7c
0059AF80  6A 00                     PUSH 0x0
0059AF82  52                        PUSH EDX
0059AF83  E8 58 AF 11 00            CALL 0x006b5ee0
0059AF88  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
0059AF8E  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059AF94  6A 14                     PUSH 0x14
0059AF96  6A 50                     PUSH 0x50
0059AF98  68 4C 01 00 00            PUSH 0x14c
0059AF9D  68 E1 00 00 00            PUSH 0xe1
0059AFA2  6A 00                     PUSH 0x0
0059AFA4  50                        PUSH EAX
0059AFA5  E8 E6 5A 17 00            CALL 0x00710a90
0059AFAA  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0059AFB0  6A 02                     PUSH 0x2
0059AFB2  6A FF                     PUSH -0x1
0059AFB4  6A 00                     PUSH 0x0
0059AFB6  51                        PUSH ECX
0059AFB7  68 A5 25 00 00            PUSH 0x25a5
0059AFBC  E8 7F 51 11 00            CALL 0x006b0140
0059AFC1  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059AFC7  50                        PUSH EAX
0059AFC8  E8 F3 69 17 00            CALL 0x007119c0
0059AFCD  8B 96 C0 1A 00 00         MOV EDX,dword ptr [ESI + 0x1ac0]
0059AFD3  6A 0D                     PUSH 0xd
0059AFD5  6A 0F                     PUSH 0xf
0059AFD7  6A 14                     PUSH 0x14
0059AFD9  6A 52                     PUSH 0x52
0059AFDB  68 60 01 00 00            PUSH 0x160
0059AFE0  68 E0 00 00 00            PUSH 0xe0
0059AFE5  6A 00                     PUSH 0x0
0059AFE7  52                        PUSH EDX
0059AFE8  E8 F3 AE 11 00            CALL 0x006b5ee0
0059AFED  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
0059AFF3  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059AFF9  6A 14                     PUSH 0x14
0059AFFB  6A 50                     PUSH 0x50
0059AFFD  68 4C 01 00 00            PUSH 0x14c
0059B002  68 45 01 00 00            PUSH 0x145
0059B007  6A 00                     PUSH 0x0
0059B009  50                        PUSH EAX
0059B00A  E8 81 5A 17 00            CALL 0x00710a90
0059B00F  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0059B015  6A 02                     PUSH 0x2
0059B017  6A FF                     PUSH -0x1
0059B019  6A 00                     PUSH 0x0
0059B01B  51                        PUSH ECX
0059B01C  68 A1 25 00 00            PUSH 0x25a1
0059B021  E8 1A 51 11 00            CALL 0x006b0140
0059B026  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
0059B02C  50                        PUSH EAX
0059B02D  E8 8E 69 17 00            CALL 0x007119c0
0059B032  8B 96 C0 1A 00 00         MOV EDX,dword ptr [ESI + 0x1ac0]
0059B038  6A 0D                     PUSH 0xd
0059B03A  6A 0F                     PUSH 0xf
0059B03C  6A 14                     PUSH 0x14
0059B03E  6A 52                     PUSH 0x52
0059B040  68 60 01 00 00            PUSH 0x160
0059B045  68 44 01 00 00            PUSH 0x144
0059B04A  6A 00                     PUSH 0x0
0059B04C  52                        PUSH EDX
0059B04D  E8 8E AE 11 00            CALL 0x006b5ee0
0059B052  8B 86 BC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1abc]
0059B058  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0059B05E  50                        PUSH EAX
0059B05F  51                        PUSH ECX
0059B060  E8 CB 83 11 00            CALL 0x006b3430
0059B065  8B 96 BC 1A 00 00         MOV EDX,dword ptr [ESI + 0x1abc]
0059B06B  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0059B070  52                        PUSH EDX
0059B071  50                        PUSH EAX
0059B072  E8 59 85 11 00            CALL 0x006b35d0
0059B077  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0059B07A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0059B080  5F                        POP EDI
0059B081  5E                        POP ESI
0059B082  5B                        POP EBX
0059B083  8B E5                     MOV ESP,EBP
0059B085  5D                        POP EBP
0059B086  C3                        RET
LAB_0059b087:
0059B087  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0059B08A  68 4C C2 7C 00            PUSH 0x7cc24c
0059B08F  68 CC 4C 7A 00            PUSH 0x7a4ccc
0059B094  56                        PUSH ESI
0059B095  6A 00                     PUSH 0x0
0059B097  68 6C 04 00 00            PUSH 0x46c
0059B09C  68 70 BF 7C 00            PUSH 0x7cbf70
0059B0A1  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0059B0A7  E8 24 24 11 00            CALL 0x006ad4d0
0059B0AC  83 C4 18                  ADD ESP,0x18
0059B0AF  85 C0                     TEST EAX,EAX
0059B0B1  74 01                     JZ 0x0059b0b4
0059B0B3  CC                        INT3
LAB_0059b0b4:
0059B0B4  68 6C 04 00 00            PUSH 0x46c
0059B0B9  68 70 BF 7C 00            PUSH 0x7cbf70
0059B0BE  6A 00                     PUSH 0x0
0059B0C0  56                        PUSH ESI
0059B0C1  E8 7A AD 10 00            CALL 0x006a5e40
0059B0C6  5F                        POP EDI
0059B0C7  5E                        POP ESI
0059B0C8  5B                        POP EBX
0059B0C9  8B E5                     MOV ESP,EBP
0059B0CB  5D                        POP EBP
0059B0CC  C3                        RET
