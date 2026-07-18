StartSystemTy::SetObjectives:
005DC730  55                        PUSH EBP
005DC731  8B EC                     MOV EBP,ESP
005DC733  83 EC 6C                  SUB ESP,0x6c
005DC736  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005DC73B  53                        PUSH EBX
005DC73C  56                        PUSH ESI
005DC73D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005DC740  57                        PUSH EDI
005DC741  8D 55 98                  LEA EDX,[EBP + -0x68]
005DC744  8D 4D 94                  LEA ECX,[EBP + -0x6c]
005DC747  6A 00                     PUSH 0x0
005DC749  52                        PUSH EDX
005DC74A  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
005DC74D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DC753  E8 98 10 15 00            CALL 0x0072d7f0
005DC758  8B F0                     MOV ESI,EAX
005DC75A  83 C4 08                  ADD ESP,0x8
005DC75D  85 F6                     TEST ESI,ESI
005DC75F  0F 85 57 03 00 00         JNZ 0x005dcabc
005DC765  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005DC768  85 F6                     TEST ESI,ESI
005DC76A  0F 84 3A 03 00 00         JZ 0x005dcaaa
005DC770  A1 C7 C4 80 00            MOV EAX,[0x0080c4c7]
005DC775  85 C0                     TEST EAX,EAX
005DC777  74 06                     JZ 0x005dc77f
005DC779  50                        PUSH EAX
005DC77A  E8 F1 8D 0D 00            CALL 0x006b5570
LAB_005dc77f:
005DC77F  A1 D0 C1 79 00            MOV EAX,[0x0079c1d0]
005DC784  6A 00                     PUSH 0x0
005DC786  50                        PUSH EAX
005DC787  56                        PUSH ESI
005DC788  E8 83 E2 13 00            CALL 0x0071aa10
005DC78D  83 C4 0C                  ADD ESP,0xc
005DC790  A3 C7 C4 80 00            MOV [0x0080c4c7],EAX
005DC795  85 C0                     TEST EAX,EAX
005DC797  75 0F                     JNZ 0x005dc7a8
005DC799  6A 0A                     PUSH 0xa
005DC79B  6A 0A                     PUSH 0xa
005DC79D  50                        PUSH EAX
005DC79E  E8 4D 8D 0D 00            CALL 0x006b54f0
005DC7A3  A3 C7 C4 80 00            MOV [0x0080c4c7],EAX
LAB_005dc7a8:
005DC7A8  A1 CB C4 80 00            MOV EAX,[0x0080c4cb]
005DC7AD  85 C0                     TEST EAX,EAX
005DC7AF  74 0B                     JZ 0x005dc7bc
005DC7B1  50                        PUSH EAX
005DC7B2  E8 B9 8D 0D 00            CALL 0x006b5570
005DC7B7  A1 CB C4 80 00            MOV EAX,[0x0080c4cb]
LAB_005dc7bc:
005DC7BC  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005DC7BF  85 C9                     TEST ECX,ECX
005DC7C1  74 11                     JZ 0x005dc7d4
005DC7C3  6A 00                     PUSH 0x0
005DC7C5  51                        PUSH ECX
005DC7C6  56                        PUSH ESI
005DC7C7  E8 44 E2 13 00            CALL 0x0071aa10
005DC7CC  83 C4 0C                  ADD ESP,0xc
005DC7CF  A3 CB C4 80 00            MOV [0x0080c4cb],EAX
LAB_005dc7d4:
005DC7D4  85 C0                     TEST EAX,EAX
005DC7D6  75 0F                     JNZ 0x005dc7e7
005DC7D8  6A 0A                     PUSH 0xa
005DC7DA  6A 0A                     PUSH 0xa
005DC7DC  50                        PUSH EAX
005DC7DD  E8 0E 8D 0D 00            CALL 0x006b54f0
005DC7E2  A3 CB C4 80 00            MOV [0x0080c4cb],EAX
LAB_005dc7e7:
005DC7E7  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005DC7EA  8B 86 48 05 00 00         MOV EAX,dword ptr [ESI + 0x548]
005DC7F0  85 C0                     TEST EAX,EAX
005DC7F2  74 06                     JZ 0x005dc7fa
005DC7F4  50                        PUSH EAX
005DC7F5  E8 76 8D 0D 00            CALL 0x006b5570
LAB_005dc7fa:
005DC7FA  6A 0A                     PUSH 0xa
005DC7FC  6A 0A                     PUSH 0xa
005DC7FE  6A 00                     PUSH 0x0
005DC800  E8 EB 8C 0D 00            CALL 0x006b54f0
005DC805  89 86 48 05 00 00         MOV dword ptr [ESI + 0x548],EAX
005DC80B  8B 0D CB C4 80 00         MOV ECX,dword ptr [0x0080c4cb]
005DC811  33 FF                     XOR EDI,EDI
005DC813  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005DC816  85 C0                     TEST EAX,EAX
005DC818  7E 31                     JLE 0x005dc84b
005DC81A  3B F8                     CMP EDI,EAX
005DC81C  7D 08                     JGE 0x005dc826
LAB_005dc81e:
005DC81E  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
005DC821  8B 04 B9                  MOV EAX,dword ptr [ECX + EDI*0x4]
005DC824  EB 02                     JMP 0x005dc828
LAB_005dc826:
005DC826  33 C0                     XOR EAX,EAX
LAB_005dc828:
005DC828  8B 96 48 05 00 00         MOV EDX,dword ptr [ESI + 0x548]
005DC82E  68 B4 72 7C 00            PUSH 0x7c72b4
005DC833  50                        PUSH EAX
005DC834  52                        PUSH EDX
005DC835  E8 66 4D E2 FF            CALL 0x004015a0
005DC83A  8B 0D CB C4 80 00         MOV ECX,dword ptr [0x0080c4cb]
005DC840  83 C4 0C                  ADD ESP,0xc
005DC843  47                        INC EDI
005DC844  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005DC847  3B F8                     CMP EDI,EAX
005DC849  7C D3                     JL 0x005dc81e
LAB_005dc84b:
005DC84B  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
005DC84E  6A 01                     PUSH 0x1
005DC850  6A 00                     PUSH 0x0
005DC852  6A FF                     PUSH -0x1
005DC854  C7 40 7E 01 00 00 00      MOV dword ptr [EAX + 0x7e],0x1
005DC85B  05 9E 00 00 00            ADD EAX,0x9e
005DC860  6A 00                     PUSH 0x0
005DC862  66 C7 00 00 00            MOV word ptr [EAX],0x0
005DC867  8A 0D 54 C8 7C 00         MOV CL,byte ptr [0x007cc854]
005DC86D  88 08                     MOV byte ptr [EAX],CL
005DC86F  8B 96 44 05 00 00         MOV EDX,dword ptr [ESI + 0x544]
005DC875  8B 8E 48 05 00 00         MOV ECX,dword ptr [ESI + 0x548]
005DC87B  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
005DC87E  83 E8 14                  SUB EAX,0x14
005DC881  50                        PUSH EAX
005DC882  68 EC 21 7C 00            PUSH 0x7c21ec
005DC887  68 D8 21 7C 00            PUSH 0x7c21d8
005DC88C  51                        PUSH ECX
005DC88D  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
005DC890  E8 4B 5E 13 00            CALL 0x007126e0
005DC895  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005DC898  8B 86 48 05 00 00         MOV EAX,dword ptr [ESI + 0x548]
005DC89E  85 C0                     TEST EAX,EAX
005DC8A0  74 06                     JZ 0x005dc8a8
005DC8A2  50                        PUSH EAX
005DC8A3  E8 C8 8C 0D 00            CALL 0x006b5570
LAB_005dc8a8:
005DC8A8  6A 0A                     PUSH 0xa
005DC8AA  6A 0A                     PUSH 0xa
005DC8AC  6A 00                     PUSH 0x0
005DC8AE  E8 3D 8C 0D 00            CALL 0x006b54f0
005DC8B3  89 86 48 05 00 00         MOV dword ptr [ESI + 0x548],EAX
005DC8B9  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005DC8BF  52                        PUSH EDX
005DC8C0  68 47 23 00 00            PUSH 0x2347
005DC8C5  8D 7E 3C                  LEA EDI,[ESI + 0x3c]
005DC8C8  E8 73 38 0D 00            CALL 0x006b0140
005DC8CD  8B 1D E8 BD 85 00         MOV EBX,dword ptr [0x0085bde8]
005DC8D3  50                        PUSH EAX
005DC8D4  68 00 D8 7C 00            PUSH 0x7cd800
005DC8D9  57                        PUSH EDI
005DC8DA  FF D3                     CALL EBX
005DC8DC  8B 86 48 05 00 00         MOV EAX,dword ptr [ESI + 0x548]
005DC8E2  83 C4 0C                  ADD ESP,0xc
005DC8E5  57                        PUSH EDI
005DC8E6  50                        PUSH EAX
005DC8E7  E8 B4 91 0D 00            CALL 0x006b5aa0
005DC8EC  68 C3 C3 80 00            PUSH 0x80c3c3
005DC8F1  68 F8 D7 7C 00            PUSH 0x7cd7f8
005DC8F6  57                        PUSH EDI
005DC8F7  FF D3                     CALL EBX
005DC8F9  8B 8E 48 05 00 00         MOV ECX,dword ptr [ESI + 0x548]
005DC8FF  83 C4 0C                  ADD ESP,0xc
005DC902  57                        PUSH EDI
005DC903  51                        PUSH ECX
005DC904  E8 97 91 0D 00            CALL 0x006b5aa0
005DC909  8B 96 48 05 00 00         MOV EDX,dword ptr [ESI + 0x548]
005DC90F  68 5C 3B 7C 00            PUSH 0x7c3b5c
005DC914  52                        PUSH EDX
005DC915  E8 86 91 0D 00            CALL 0x006b5aa0
005DC91A  A1 C4 87 80 00            MOV EAX,[0x008087c4]
005DC91F  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005DC925  33 C9                     XOR ECX,ECX
005DC927  25 FF FF 00 00            AND EAX,0xffff
005DC92C  66 8B 0D C2 87 80 00      MOV CX,word ptr [0x008087c2]
005DC933  50                        PUSH EAX
005DC934  51                        PUSH ECX
005DC935  52                        PUSH EDX
005DC936  68 44 23 00 00            PUSH 0x2344
005DC93B  E8 00 38 0D 00            CALL 0x006b0140
005DC940  50                        PUSH EAX
005DC941  68 E0 D7 7C 00            PUSH 0x7cd7e0
005DC946  57                        PUSH EDI
005DC947  FF D3                     CALL EBX
005DC949  8B 86 48 05 00 00         MOV EAX,dword ptr [ESI + 0x548]
005DC94F  83 C4 14                  ADD ESP,0x14
005DC952  57                        PUSH EDI
005DC953  50                        PUSH EAX
005DC954  E8 47 91 0D 00            CALL 0x006b5aa0
005DC959  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005DC95F  33 C9                     XOR ECX,ECX
005DC961  8A 0D C6 87 80 00         MOV CL,byte ptr [0x008087c6]
005DC967  51                        PUSH ECX
005DC968  52                        PUSH EDX
005DC969  68 45 23 00 00            PUSH 0x2345
005DC96E  E8 CD 37 0D 00            CALL 0x006b0140
005DC973  50                        PUSH EAX
005DC974  68 D0 D7 7C 00            PUSH 0x7cd7d0
005DC979  57                        PUSH EDI
005DC97A  FF D3                     CALL EBX
005DC97C  8B 86 48 05 00 00         MOV EAX,dword ptr [ESI + 0x548]
005DC982  83 C4 10                  ADD ESP,0x10
005DC985  57                        PUSH EDI
005DC986  50                        PUSH EAX
005DC987  E8 14 91 0D 00            CALL 0x006b5aa0
005DC98C  8B 8E 48 05 00 00         MOV ECX,dword ptr [ESI + 0x548]
005DC992  68 5C 3B 7C 00            PUSH 0x7c3b5c
005DC997  51                        PUSH ECX
005DC998  E8 03 91 0D 00            CALL 0x006b5aa0
005DC99D  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005DC9A3  52                        PUSH EDX
005DC9A4  68 46 23 00 00            PUSH 0x2346
005DC9A9  E8 92 37 0D 00            CALL 0x006b0140
005DC9AE  50                        PUSH EAX
005DC9AF  68 00 D8 7C 00            PUSH 0x7cd800
005DC9B4  57                        PUSH EDI
005DC9B5  FF D3                     CALL EBX
005DC9B7  83 C4 0C                  ADD ESP,0xc
005DC9BA  8B 86 48 05 00 00         MOV EAX,dword ptr [ESI + 0x548]
005DC9C0  57                        PUSH EDI
005DC9C1  50                        PUSH EAX
005DC9C2  E8 D9 90 0D 00            CALL 0x006b5aa0
005DC9C7  8B 8E 48 05 00 00         MOV ECX,dword ptr [ESI + 0x548]
005DC9CD  68 5C 3B 7C 00            PUSH 0x7c3b5c
005DC9D2  51                        PUSH ECX
005DC9D3  E8 C8 90 0D 00            CALL 0x006b5aa0
005DC9D8  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
005DC9DB  85 DB                     TEST EBX,EBX
005DC9DD  74 43                     JZ 0x005dca22
005DC9DF  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
005DC9E2  85 C0                     TEST EAX,EAX
005DC9E4  74 0A                     JZ 0x005dc9f0
005DC9E6  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
005DC9E9  53                        PUSH EBX
005DC9EA  53                        PUSH EBX
005DC9EB  E8 E0 5F 13 00            CALL 0x007129d0
LAB_005dc9f0:
005DC9F0  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
005DC9F3  33 FF                     XOR EDI,EDI
005DC9F5  85 C0                     TEST EAX,EAX
005DC9F7  7E 23                     JLE 0x005dca1c
005DC9F9  3B F8                     CMP EDI,EAX
005DC9FB  7D 08                     JGE 0x005dca05
LAB_005dc9fd:
005DC9FD  8B 53 14                  MOV EDX,dword ptr [EBX + 0x14]
005DCA00  8B 04 BA                  MOV EAX,dword ptr [EDX + EDI*0x4]
005DCA03  EB 02                     JMP 0x005dca07
LAB_005dca05:
005DCA05  33 C0                     XOR EAX,EAX
LAB_005dca07:
005DCA07  50                        PUSH EAX
005DCA08  8B 86 48 05 00 00         MOV EAX,dword ptr [ESI + 0x548]
005DCA0E  50                        PUSH EAX
005DCA0F  E8 8C 90 0D 00            CALL 0x006b5aa0
005DCA14  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
005DCA17  47                        INC EDI
005DCA18  3B F8                     CMP EDI,EAX
005DCA1A  7C E1                     JL 0x005dc9fd
LAB_005dca1c:
005DCA1C  53                        PUSH EBX
005DCA1D  E8 4E 8B 0D 00            CALL 0x006b5570
LAB_005dca22:
005DCA22  8B 8E 48 05 00 00         MOV ECX,dword ptr [ESI + 0x548]
005DCA28  8B 86 89 03 00 00         MOV EAX,dword ptr [ESI + 0x389]
005DCA2E  C7 45 E8 28 00 00 00      MOV dword ptr [EBP + -0x18],0x28
005DCA35  66 C7 45 EC 01 00         MOV word ptr [EBP + -0x14],0x1
005DCA3B  66 8B 51 08               MOV DX,word ptr [ECX + 0x8]
005DCA3F  33 FF                     XOR EDI,EDI
005DCA41  3B C7                     CMP EAX,EDI
005DCA43  66 89 55 EE               MOV word ptr [EBP + -0x12],DX
005DCA47  74 0E                     JZ 0x005dca57
005DCA49  8D 4D D8                  LEA ECX,[EBP + -0x28]
005DCA4C  51                        PUSH ECX
005DCA4D  50                        PUSH EAX
005DCA4E  6A 02                     PUSH 0x2
005DCA50  8B CE                     MOV ECX,ESI
005DCA52  E8 19 8F 10 00            CALL 0x006e5970
LAB_005dca57:
005DCA57  8B 86 89 03 00 00         MOV EAX,dword ptr [ESI + 0x389]
005DCA5D  C7 45 E8 22 00 00 00      MOV dword ptr [EBP + -0x18],0x22
005DCA64  3B C7                     CMP EAX,EDI
005DCA66  66 89 7D EE               MOV word ptr [EBP + -0x12],DI
005DCA6A  66 89 7D EC               MOV word ptr [EBP + -0x14],DI
005DCA6E  74 0E                     JZ 0x005dca7e
005DCA70  8D 55 D8                  LEA EDX,[EBP + -0x28]
005DCA73  8B CE                     MOV ECX,ESI
005DCA75  52                        PUSH EDX
005DCA76  50                        PUSH EAX
005DCA77  6A 02                     PUSH 0x2
005DCA79  E8 F2 8E 10 00            CALL 0x006e5970
LAB_005dca7e:
005DCA7E  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005DCA81  33 C0                     XOR EAX,EAX
005DCA83  3B D7                     CMP EDX,EDI
005DCA85  C7 45 E8 20 00 00 00      MOV dword ptr [EBP + -0x18],0x20
005DCA8C  0F 95 C0                  SETNZ AL
005DCA8F  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
005DCA92  8B 86 89 03 00 00         MOV EAX,dword ptr [ESI + 0x389]
005DCA98  3B C7                     CMP EAX,EDI
005DCA9A  74 0E                     JZ 0x005dcaaa
005DCA9C  8D 4D D8                  LEA ECX,[EBP + -0x28]
005DCA9F  51                        PUSH ECX
005DCAA0  50                        PUSH EAX
005DCAA1  6A 02                     PUSH 0x2
005DCAA3  8B CE                     MOV ECX,ESI
005DCAA5  E8 C6 8E 10 00            CALL 0x006e5970
LAB_005dcaaa:
005DCAAA  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
005DCAAD  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005DCAB3  5F                        POP EDI
005DCAB4  5E                        POP ESI
005DCAB5  5B                        POP EBX
005DCAB6  8B E5                     MOV ESP,EBP
005DCAB8  5D                        POP EBP
005DCAB9  C2 0C 00                  RET 0xc
LAB_005dcabc:
005DCABC  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
005DCABF  68 08 D8 7C 00            PUSH 0x7cd808
005DCAC4  68 CC 4C 7A 00            PUSH 0x7a4ccc
005DCAC9  56                        PUSH ESI
005DCACA  6A 00                     PUSH 0x0
005DCACC  68 6B 02 00 00            PUSH 0x26b
005DCAD1  68 18 D7 7C 00            PUSH 0x7cd718
005DCAD6  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005DCADB  E8 F0 09 0D 00            CALL 0x006ad4d0
005DCAE0  83 C4 18                  ADD ESP,0x18
005DCAE3  85 C0                     TEST EAX,EAX
005DCAE5  74 01                     JZ 0x005dcae8
005DCAE7  CC                        INT3
LAB_005dcae8:
005DCAE8  68 6B 02 00 00            PUSH 0x26b
005DCAED  68 18 D7 7C 00            PUSH 0x7cd718
005DCAF2  6A 00                     PUSH 0x0
005DCAF4  56                        PUSH ESI
005DCAF5  E8 46 93 0C 00            CALL 0x006a5e40
005DCAFA  5F                        POP EDI
005DCAFB  5E                        POP ESI
005DCAFC  5B                        POP EBX
005DCAFD  8B E5                     MOV ESP,EBP
005DCAFF  5D                        POP EBP
005DCB00  C2 0C 00                  RET 0xc
