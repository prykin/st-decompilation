STT3DSprC::SaveSpr:
004AD790  55                        PUSH EBP
004AD791  8B EC                     MOV EBP,ESP
004AD793  83 EC 5C                  SUB ESP,0x5c
004AD796  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004AD79B  53                        PUSH EBX
004AD79C  56                        PUSH ESI
004AD79D  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
004AD7A0  57                        PUSH EDI
004AD7A1  8D 55 A8                  LEA EDX,[EBP + -0x58]
004AD7A4  8D 4D A4                  LEA ECX,[EBP + -0x5c]
004AD7A7  6A 00                     PUSH 0x0
004AD7A9  52                        PUSH EDX
004AD7AA  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
004AD7AD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004AD7B3  E8 38 00 28 00            CALL 0x0072d7f0
004AD7B8  83 C4 08                  ADD ESP,0x8
004AD7BB  85 C0                     TEST EAX,EAX
004AD7BD  0F 85 D0 02 00 00         JNZ 0x004ada93
004AD7C3  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
004AD7C6  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004AD7C9  33 F6                     XOR ESI,ESI
004AD7CB  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
004AD7CE  40                        INC EAX
004AD7CF  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004AD7D2  C1 E0 02                  SHL EAX,0x2
004AD7D5  89 07                     MOV dword ptr [EDI],EAX
004AD7D7  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
004AD7DA  85 C0                     TEST EAX,EAX
004AD7DC  7E 4F                     JLE 0x004ad82d
004AD7DE  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_004ad7e1:
004AD7E1  56                        PUSH ESI
004AD7E2  8B CB                     MOV ECX,EBX
004AD7E4  E8 C3 4A F5 FF            CALL 0x004022ac
004AD7E9  8B 17                     MOV EDX,dword ptr [EDI]
004AD7EB  C1 E0 02                  SHL EAX,0x2
004AD7EE  03 D0                     ADD EDX,EAX
004AD7F0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004AD7F3  89 17                     MOV dword ptr [EDI],EDX
004AD7F5  8B 4B 20                  MOV ECX,dword ptr [EBX + 0x20]
004AD7F8  8B 44 08 08               MOV EAX,dword ptr [EAX + ECX*0x1 + 0x8]
004AD7FC  85 C0                     TEST EAX,EAX
004AD7FE  74 19                     JZ 0x004ad819
004AD800  8B F8                     MOV EDI,EAX
004AD802  83 C9 FF                  OR ECX,0xffffffff
004AD805  33 C0                     XOR EAX,EAX
004AD807  F2 AE                     SCASB.REPNE ES:EDI
004AD809  F7 D1                     NOT ECX
004AD80B  49                        DEC ECX
004AD80C  8D 4C 11 01               LEA ECX,[ECX + EDX*0x1 + 0x1]
004AD810  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004AD813  8B FA                     MOV EDI,EDX
004AD815  89 0A                     MOV dword ptr [EDX],ECX
004AD817  EB 03                     JMP 0x004ad81c
LAB_004ad819:
004AD819  42                        INC EDX
004AD81A  89 17                     MOV dword ptr [EDI],EDX
LAB_004ad81c:
004AD81C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004AD81F  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
004AD822  46                        INC ESI
004AD823  83 C1 24                  ADD ECX,0x24
004AD826  3B F0                     CMP ESI,EAX
004AD828  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004AD82B  7C B4                     JL 0x004ad7e1
LAB_004ad82d:
004AD82D  8B 07                     MOV EAX,dword ptr [EDI]
004AD82F  50                        PUSH EAX
004AD830  E8 3B D4 1F 00            CALL 0x006aac70
004AD835  8B 0F                     MOV ECX,dword ptr [EDI]
004AD837  8B F0                     MOV ESI,EAX
004AD839  8B D1                     MOV EDX,ECX
004AD83B  33 C0                     XOR EAX,EAX
004AD83D  8B FE                     MOV EDI,ESI
004AD83F  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
004AD842  C1 E9 02                  SHR ECX,0x2
004AD845  F3 AB                     STOSD.REP ES:EDI
004AD847  8B CA                     MOV ECX,EDX
004AD849  83 E1 03                  AND ECX,0x3
004AD84C  F3 AA                     STOSB.REP ES:EDI
004AD84E  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
004AD851  8D 7E 24                  LEA EDI,[ESI + 0x24]
004AD854  89 06                     MOV dword ptr [ESI],EAX
004AD856  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
004AD859  89 4E 04                  MOV dword ptr [ESI + 0x4],ECX
004AD85C  8A 53 10                  MOV DL,byte ptr [EBX + 0x10]
004AD85F  88 56 08                  MOV byte ptr [ESI + 0x8],DL
004AD862  8A 43 11                  MOV AL,byte ptr [EBX + 0x11]
004AD865  88 46 09                  MOV byte ptr [ESI + 0x9],AL
004AD868  8A 4B 12                  MOV CL,byte ptr [EBX + 0x12]
004AD86B  88 4E 0A                  MOV byte ptr [ESI + 0xa],CL
004AD86E  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
004AD871  89 56 0B                  MOV dword ptr [ESI + 0xb],EDX
004AD874  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
004AD877  89 46 0F                  MOV dword ptr [ESI + 0xf],EAX
004AD87A  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
004AD87D  89 4E 13                  MOV dword ptr [ESI + 0x13],ECX
004AD880  8B 53 28                  MOV EDX,dword ptr [EBX + 0x28]
004AD883  89 56 17                  MOV dword ptr [ESI + 0x17],EDX
004AD886  8B 43 2C                  MOV EAX,dword ptr [EBX + 0x2c]
004AD889  89 46 1B                  MOV dword ptr [ESI + 0x1b],EAX
004AD88C  8A 4B 13                  MOV CL,byte ptr [EBX + 0x13]
004AD88F  88 4E 1F                  MOV byte ptr [ESI + 0x1f],CL
004AD892  8B 53 30                  MOV EDX,dword ptr [EBX + 0x30]
004AD895  89 56 20                  MOV dword ptr [ESI + 0x20],EDX
004AD898  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
004AD89B  33 C9                     XOR ECX,ECX
004AD89D  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
004AD8A0  3B C1                     CMP EAX,ECX
004AD8A2  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004AD8A5  0F 8E 02 01 00 00         JLE 0x004ad9ad
004AD8AB  33 F6                     XOR ESI,ESI
LAB_004ad8ad:
004AD8AD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004AD8B0  8B CB                     MOV ECX,EBX
004AD8B2  50                        PUSH EAX
004AD8B3  E8 F4 49 F5 FF            CALL 0x004022ac
004AD8B8  89 07                     MOV dword ptr [EDI],EAX
004AD8BA  8B 4B 20                  MOV ECX,dword ptr [EBX + 0x20]
004AD8BD  83 C7 24                  ADD EDI,0x24
004AD8C0  8A 54 0E 0C               MOV DL,byte ptr [ESI + ECX*0x1 + 0xc]
004AD8C4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004AD8C7  88 57 E0                  MOV byte ptr [EDI + -0x20],DL
004AD8CA  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
004AD8CD  D3 E8                     SHR EAX,CL
004AD8CF  83 C6 24                  ADD ESI,0x24
004AD8D2  24 01                     AND AL,0x1
004AD8D4  88 47 E1                  MOV byte ptr [EDI + -0x1f],AL
004AD8D7  8B 53 20                  MOV EDX,dword ptr [EBX + 0x20]
004AD8DA  8A 44 16 EA               MOV AL,byte ptr [ESI + EDX*0x1 + -0x16]
004AD8DE  24 01                     AND AL,0x1
004AD8E0  88 47 E2                  MOV byte ptr [EDI + -0x1e],AL
004AD8E3  8B 53 20                  MOV EDX,dword ptr [EBX + 0x20]
004AD8E6  8A 44 16 E9               MOV AL,byte ptr [ESI + EDX*0x1 + -0x17]
004AD8EA  88 47 E3                  MOV byte ptr [EDI + -0x1d],AL
004AD8ED  8B 53 20                  MOV EDX,dword ptr [EBX + 0x20]
004AD8F0  8A 44 16 EA               MOV AL,byte ptr [ESI + EDX*0x1 + -0x16]
004AD8F4  D0 E8                     SHR AL,0x1
004AD8F6  24 01                     AND AL,0x1
004AD8F8  88 47 E4                  MOV byte ptr [EDI + -0x1c],AL
004AD8FB  8B 53 20                  MOV EDX,dword ptr [EBX + 0x20]
004AD8FE  66 8B 44 16 EA            MOV AX,word ptr [ESI + EDX*0x1 + -0x16]
004AD903  C1 E8 09                  SHR EAX,0x9
004AD906  24 01                     AND AL,0x1
004AD908  88 47 E5                  MOV byte ptr [EDI + -0x1b],AL
004AD90B  8B 53 20                  MOV EDX,dword ptr [EBX + 0x20]
004AD90E  8A 44 16 EA               MOV AL,byte ptr [ESI + EDX*0x1 + -0x16]
004AD912  C0 E8 02                  SHR AL,0x2
004AD915  24 01                     AND AL,0x1
004AD917  88 47 E6                  MOV byte ptr [EDI + -0x1a],AL
004AD91A  8B 53 20                  MOV EDX,dword ptr [EBX + 0x20]
004AD91D  8B 44 16 EC               MOV EAX,dword ptr [ESI + EDX*0x1 + -0x14]
004AD921  89 47 E7                  MOV dword ptr [EDI + -0x19],EAX
004AD924  8B 53 20                  MOV EDX,dword ptr [EBX + 0x20]
004AD927  8B 44 16 F0               MOV EAX,dword ptr [ESI + EDX*0x1 + -0x10]
004AD92B  89 47 EB                  MOV dword ptr [EDI + -0x15],EAX
004AD92E  8B 53 20                  MOV EDX,dword ptr [EBX + 0x20]
004AD931  8B 44 16 F4               MOV EAX,dword ptr [ESI + EDX*0x1 + -0xc]
004AD935  89 47 EF                  MOV dword ptr [EDI + -0x11],EAX
004AD938  8B 53 20                  MOV EDX,dword ptr [EBX + 0x20]
004AD93B  8B 44 16 F8               MOV EAX,dword ptr [ESI + EDX*0x1 + -0x8]
004AD93F  89 47 F3                  MOV dword ptr [EDI + -0xd],EAX
004AD942  8B 53 20                  MOV EDX,dword ptr [EBX + 0x20]
004AD945  8B 44 16 FC               MOV EAX,dword ptr [ESI + EDX*0x1 + -0x4]
004AD949  89 47 F7                  MOV dword ptr [EDI + -0x9],EAX
004AD94C  8B 53 20                  MOV EDX,dword ptr [EBX + 0x20]
004AD94F  8A 44 16 EA               MOV AL,byte ptr [ESI + EDX*0x1 + -0x16]
004AD953  C0 E8 05                  SHR AL,0x5
004AD956  24 01                     AND AL,0x1
004AD958  88 47 FB                  MOV byte ptr [EDI + -0x5],AL
004AD95B  8B 53 20                  MOV EDX,dword ptr [EBX + 0x20]
004AD95E  8A 44 16 EA               MOV AL,byte ptr [ESI + EDX*0x1 + -0x16]
004AD962  C0 E8 06                  SHR AL,0x6
004AD965  24 01                     AND AL,0x1
004AD967  88 47 FC                  MOV byte ptr [EDI + -0x4],AL
004AD96A  8B 53 20                  MOV EDX,dword ptr [EBX + 0x20]
004AD96D  8A 44 16 EA               MOV AL,byte ptr [ESI + EDX*0x1 + -0x16]
004AD971  C0 E8 07                  SHR AL,0x7
004AD974  24 01                     AND AL,0x1
004AD976  88 47 FD                  MOV byte ptr [EDI + -0x3],AL
004AD979  8B 53 20                  MOV EDX,dword ptr [EBX + 0x20]
004AD97C  8A 44 16 EA               MOV AL,byte ptr [ESI + EDX*0x1 + -0x16]
004AD980  C0 E8 03                  SHR AL,0x3
004AD983  24 01                     AND AL,0x1
004AD985  88 47 FE                  MOV byte ptr [EDI + -0x2],AL
004AD988  8B 53 20                  MOV EDX,dword ptr [EBX + 0x20]
004AD98B  33 C0                     XOR EAX,EAX
004AD98D  8A 44 16 EB               MOV AL,byte ptr [ESI + EDX*0x1 + -0x15]
004AD991  24 01                     AND AL,0x1
004AD993  41                        INC ECX
004AD994  88 47 FF                  MOV byte ptr [EDI + -0x1],AL
004AD997  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
004AD99A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004AD99D  3B C8                     CMP ECX,EAX
004AD99F  0F 8C 08 FF FF FF         JL 0x004ad8ad
004AD9A5  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
004AD9A8  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
004AD9AB  33 C9                     XOR ECX,ECX
LAB_004ad9ad:
004AD9AD  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
004AD9B0  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004AD9B3  3B C1                     CMP EAX,ECX
004AD9B5  7E 6D                     JLE 0x004ada24
004AD9B7  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_004ad9ba:
004AD9BA  8B 53 20                  MOV EDX,dword ptr [EBX + 0x20]
004AD9BD  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004AD9C0  8B 44 02 08               MOV EAX,dword ptr [EDX + EAX*0x1 + 0x8]
004AD9C4  3B C1                     CMP EAX,ECX
004AD9C6  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004AD9C9  74 38                     JZ 0x004ada03
004AD9CB  8B F8                     MOV EDI,EAX
004AD9CD  83 C9 FF                  OR ECX,0xffffffff
004AD9D0  33 C0                     XOR EAX,EAX
004AD9D2  F2 AE                     SCASB.REPNE ES:EDI
004AD9D4  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
004AD9D7  F7 D1                     NOT ECX
004AD9D9  49                        DEC ECX
004AD9DA  8B D1                     MOV EDX,ECX
004AD9DC  83 C9 FF                  OR ECX,0xffffffff
004AD9DF  42                        INC EDX
004AD9E0  F2 AE                     SCASB.REPNE ES:EDI
004AD9E2  F7 D1                     NOT ECX
004AD9E4  2B F9                     SUB EDI,ECX
004AD9E6  8B C1                     MOV EAX,ECX
004AD9E8  8B F7                     MOV ESI,EDI
004AD9EA  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
004AD9ED  C1 E9 02                  SHR ECX,0x2
004AD9F0  F3 A5                     MOVSD.REP ES:EDI,ESI
004AD9F2  8B C8                     MOV ECX,EAX
004AD9F4  83 E1 03                  AND ECX,0x3
004AD9F7  F3 A4                     MOVSB.REP ES:EDI,ESI
004AD9F9  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
004AD9FC  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
004AD9FF  33 C9                     XOR ECX,ECX
004ADA01  EB 05                     JMP 0x004ada08
LAB_004ada03:
004ADA03  BA 01 00 00 00            MOV EDX,0x1
LAB_004ada08:
004ADA08  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004ADA0B  03 FA                     ADD EDI,EDX
004ADA0D  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004ADA10  40                        INC EAX
004ADA11  83 C2 24                  ADD EDX,0x24
004ADA14  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
004ADA17  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
004ADA1A  8B 53 14                  MOV EDX,dword ptr [EBX + 0x14]
004ADA1D  3B C2                     CMP EAX,EDX
004ADA1F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004ADA22  7C 96                     JL 0x004ad9ba
LAB_004ada24:
004ADA24  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
004ADA27  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004ADA2A  3B C1                     CMP EAX,ECX
004ADA2C  7E 52                     JLE 0x004ada80
004ADA2E  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004ADA31  EB 03                     JMP 0x004ada36
LAB_004ada33:
004ADA33  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_004ada36:
004ADA36  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004ADA39  51                        PUSH ECX
004ADA3A  8B CB                     MOV ECX,EBX
004ADA3C  E8 6B 48 F5 FF            CALL 0x004022ac
004ADA41  8B 53 20                  MOV EDX,dword ptr [EBX + 0x20]
004ADA44  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
004ADA47  C1 E0 02                  SHL EAX,0x2
004ADA4A  8B 74 32 04               MOV ESI,dword ptr [EDX + ESI*0x1 + 0x4]
004ADA4E  8B C8                     MOV ECX,EAX
004ADA50  8B D1                     MOV EDX,ECX
004ADA52  C1 E9 02                  SHR ECX,0x2
004ADA55  F3 A5                     MOVSD.REP ES:EDI,ESI
004ADA57  8B CA                     MOV ECX,EDX
004ADA59  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004ADA5C  83 E1 03                  AND ECX,0x3
004ADA5F  83 C2 24                  ADD EDX,0x24
004ADA62  F3 A4                     MOVSB.REP ES:EDI,ESI
004ADA64  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
004ADA67  8B 4B 14                  MOV ECX,dword ptr [EBX + 0x14]
004ADA6A  03 F8                     ADD EDI,EAX
004ADA6C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004ADA6F  40                        INC EAX
004ADA70  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
004ADA73  3B C1                     CMP EAX,ECX
004ADA75  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004ADA78  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
004ADA7B  7C B6                     JL 0x004ada33
004ADA7D  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
LAB_004ada80:
004ADA80  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
004ADA83  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004ADA88  8B C6                     MOV EAX,ESI
004ADA8A  5F                        POP EDI
004ADA8B  5E                        POP ESI
004ADA8C  5B                        POP EBX
004ADA8D  8B E5                     MOV ESP,EBP
004ADA8F  5D                        POP EBP
004ADA90  C2 04 00                  RET 0x4
LAB_004ada93:
004ADA93  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
004ADA96  68 24 C7 7A 00            PUSH 0x7ac724
004ADA9B  68 CC 4C 7A 00            PUSH 0x7a4ccc
004ADAA0  50                        PUSH EAX
004ADAA1  6A 00                     PUSH 0x0
004ADAA3  68 DA 03 00 00            PUSH 0x3da
004ADAA8  68 38 C6 7A 00            PUSH 0x7ac638
004ADAAD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004ADAB3  E8 18 FA 1F 00            CALL 0x006ad4d0
004ADAB8  83 C4 18                  ADD ESP,0x18
004ADABB  85 C0                     TEST EAX,EAX
004ADABD  74 01                     JZ 0x004adac0
004ADABF  CC                        INT3
LAB_004adac0:
004ADAC0  5F                        POP EDI
004ADAC1  5E                        POP ESI
004ADAC2  33 C0                     XOR EAX,EAX
004ADAC4  5B                        POP EBX
004ADAC5  8B E5                     MOV ESP,EBP
004ADAC7  5D                        POP EBP
004ADAC8  C2 04 00                  RET 0x4
