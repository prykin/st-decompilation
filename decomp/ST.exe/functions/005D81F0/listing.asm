FUN_005d81f0:
005D81F0  55                        PUSH EBP
005D81F1  8B EC                     MOV EBP,ESP
005D81F3  83 EC 4C                  SUB ESP,0x4c
005D81F6  53                        PUSH EBX
005D81F7  56                        PUSH ESI
005D81F8  8B F1                     MOV ESI,ECX
005D81FA  57                        PUSH EDI
005D81FB  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005D81FE  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
005D8205  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
005D820B  33 FF                     XOR EDI,EDI
005D820D  89 46 61                  MOV dword ptr [ESI + 0x61],EAX
005D8210  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005D8215  8D 55 B8                  LEA EDX,[EBP + -0x48]
005D8218  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005D821B  57                        PUSH EDI
005D821C  52                        PUSH EDX
005D821D  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005D8220  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D8226  E8 C5 55 15 00            CALL 0x0072d7f0
005D822B  8B F0                     MOV ESI,EAX
005D822D  83 C4 08                  ADD ESP,0x8
005D8230  3B F7                     CMP ESI,EDI
005D8232  0F 85 50 01 00 00         JNZ 0x005d8388
005D8238  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005D823B  80 7E 65 01               CMP byte ptr [ESI + 0x65],0x1
005D823F  75 58                     JNZ 0x005d8299
005D8241  8B 86 C4 1C 00 00         MOV EAX,dword ptr [ESI + 0x1cc4]
005D8247  3B C7                     CMP EAX,EDI
005D8249  74 4E                     JZ 0x005d8299
005D824B  57                        PUSH EDI
005D824C  50                        PUSH EAX
005D824D  FF 15 E0 BC 85 00         CALL dword ptr [0x0085bce0]
005D8253  85 C0                     TEST EAX,EAX
005D8255  75 42                     JNZ 0x005d8299
005D8257  8B 86 C4 1C 00 00         MOV EAX,dword ptr [ESI + 0x1cc4]
005D825D  50                        PUSH EAX
005D825E  FF 15 E4 BC 85 00         CALL dword ptr [0x0085bce4]
005D8264  8B CE                     MOV ECX,ESI
005D8266  E8 C1 B6 E2 FF            CALL 0x0040392c
005D826B  C7 46 2D 05 00 00 00      MOV dword ptr [ESI + 0x2d],0x5
005D8272  8D BE F1 1A 00 00         LEA EDI,[ESI + 0x1af1]
005D8278  BB 02 00 00 00            MOV EBX,0x2
LAB_005d827d:
005D827D  8B 07                     MOV EAX,dword ptr [EDI]
005D827F  85 C0                     TEST EAX,EAX
005D8281  74 0E                     JZ 0x005d8291
005D8283  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
005D8286  51                        PUSH ECX
005D8287  50                        PUSH EAX
005D8288  6A 02                     PUSH 0x2
005D828A  8B CE                     MOV ECX,ESI
005D828C  E8 EF DD 10 00            CALL 0x006e6080
LAB_005d8291:
005D8291  83 C7 04                  ADD EDI,0x4
005D8294  4B                        DEC EBX
005D8295  75 E6                     JNZ 0x005d827d
005D8297  33 FF                     XOR EDI,EDI
LAB_005d8299:
005D8299  33 C0                     XOR EAX,EAX
005D829B  8A 46 65                  MOV AL,byte ptr [ESI + 0x65]
005D829E  83 E8 03                  SUB EAX,0x3
005D82A1  74 7D                     JZ 0x005d8320
005D82A3  48                        DEC EAX
005D82A4  0F 85 CE 00 00 00         JNZ 0x005d8378
005D82AA  8B 86 68 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a68]
005D82B0  3B C7                     CMP EAX,EDI
005D82B2  7E 37                     JLE 0x005d82eb
005D82B4  48                        DEC EAX
005D82B5  89 86 68 1A 00 00         MOV dword ptr [ESI + 0x1a68],EAX
005D82BB  8B 86 64 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a64]
005D82C1  83 F8 FF                  CMP EAX,-0x1
005D82C4  74 22                     JZ 0x005d82e8
005D82C6  8B 96 80 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a80]
005D82CC  8B 8E 7C 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a7c]
005D82D2  52                        PUSH EDX
005D82D3  8B 96 68 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a68]
005D82D9  51                        PUSH ECX
005D82DA  52                        PUSH EDX
005D82DB  50                        PUSH EAX
005D82DC  8B 86 A8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1aa8]
005D82E2  50                        PUSH EAX
005D82E3  E8 48 B4 0D 00            CALL 0x006b3730
LAB_005d82e8:
005D82E8  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_005d82eb:
005D82EB  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
005D82EE  0F 84 84 00 00 00         JZ 0x005d8378
005D82F4  8B CE                     MOV ECX,ESI
005D82F6  C6 46 65 02               MOV byte ptr [ESI + 0x65],0x2
005D82FA  C7 46 45 00 02 00 00      MOV dword ptr [ESI + 0x45],0x200
005D8301  89 7E 49                  MOV dword ptr [ESI + 0x49],EDI
005D8304  C7 46 4D 3F 69 00 00      MOV dword ptr [ESI + 0x4d],0x693f
005D830B  E8 A8 CA E2 FF            CALL 0x00404db8
005D8310  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005D8313  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D8319  5F                        POP EDI
005D831A  5E                        POP ESI
005D831B  5B                        POP EBX
005D831C  8B E5                     MOV ESP,EBP
005D831E  5D                        POP EBP
005D831F  C3                        RET
LAB_005d8320:
005D8320  8B 8E 6C 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a6c]
005D8326  8B 86 68 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a68]
005D832C  49                        DEC ECX
005D832D  3B C1                     CMP EAX,ECX
005D832F  7D 37                     JGE 0x005d8368
005D8331  40                        INC EAX
005D8332  89 86 68 1A 00 00         MOV dword ptr [ESI + 0x1a68],EAX
005D8338  8B 86 64 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a64]
005D833E  83 F8 FF                  CMP EAX,-0x1
005D8341  74 22                     JZ 0x005d8365
005D8343  8B 96 80 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a80]
005D8349  8B 8E 7C 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a7c]
005D834F  52                        PUSH EDX
005D8350  8B 96 68 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a68]
005D8356  51                        PUSH ECX
005D8357  52                        PUSH EDX
005D8358  50                        PUSH EAX
005D8359  8B 86 A8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1aa8]
005D835F  50                        PUSH EAX
005D8360  E8 CB B3 0D 00            CALL 0x006b3730
LAB_005d8365:
005D8365  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_005d8368:
005D8368  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
005D836B  74 0B                     JZ 0x005d8378
005D836D  8B CE                     MOV ECX,ESI
005D836F  C6 46 65 01               MOV byte ptr [ESI + 0x65],0x1
005D8373  E8 80 AD E2 FF            CALL 0x004030f8
LAB_005d8378:
005D8378  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005D837B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D8381  5F                        POP EDI
005D8382  5E                        POP ESI
005D8383  5B                        POP EBX
005D8384  8B E5                     MOV ESP,EBP
005D8386  5D                        POP EBP
005D8387  C3                        RET
LAB_005d8388:
005D8388  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005D838B  68 50 D6 7C 00            PUSH 0x7cd650
005D8390  68 CC 4C 7A 00            PUSH 0x7a4ccc
005D8395  56                        PUSH ESI
005D8396  57                        PUSH EDI
005D8397  68 98 00 00 00            PUSH 0x98
005D839C  68 C4 D5 7C 00            PUSH 0x7cd5c4
005D83A1  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005D83A7  E8 24 51 0D 00            CALL 0x006ad4d0
005D83AC  83 C4 18                  ADD ESP,0x18
005D83AF  85 C0                     TEST EAX,EAX
005D83B1  74 01                     JZ 0x005d83b4
005D83B3  CC                        INT3
LAB_005d83b4:
005D83B4  68 98 00 00 00            PUSH 0x98
005D83B9  68 C4 D5 7C 00            PUSH 0x7cd5c4
005D83BE  57                        PUSH EDI
005D83BF  56                        PUSH ESI
005D83C0  E8 7B DA 0C 00            CALL 0x006a5e40
005D83C5  5F                        POP EDI
005D83C6  5E                        POP ESI
005D83C7  5B                        POP EBX
005D83C8  8B E5                     MOV ESP,EBP
005D83CA  5D                        POP EBP
005D83CB  C3                        RET
