mfImtLoad:
0070AE60  55                        PUSH EBP
0070AE61  8B EC                     MOV EBP,ESP
0070AE63  83 EC 50                  SUB ESP,0x50
0070AE66  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0070AE6B  53                        PUSH EBX
0070AE6C  56                        PUSH ESI
0070AE6D  33 F6                     XOR ESI,ESI
0070AE6F  57                        PUSH EDI
0070AE70  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0070AE73  8D 4D B0                  LEA ECX,[EBP + -0x50]
0070AE76  56                        PUSH ESI
0070AE77  52                        PUSH EDX
0070AE78  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0070AE7B  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0070AE7E  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0070AE81  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070AE87  E8 64 29 02 00            CALL 0x0072d7f0
0070AE8C  8B D8                     MOV EBX,EAX
0070AE8E  83 C4 08                  ADD ESP,0x8
0070AE91  3B DE                     CMP EBX,ESI
0070AE93  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0070AE96  0F 85 8B 02 00 00         JNZ 0x0070b127
0070AE9C  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0070AE9F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0070AEA2  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0070AEA5  50                        PUSH EAX
0070AEA6  56                        PUSH ESI
0070AEA7  51                        PUSH ECX
0070AEA8  6A 0B                     PUSH 0xb
0070AEAA  8B CB                     MOV ECX,EBX
0070AEAC  E8 2F 6E FE FF            CALL 0x006f1ce0
0070AEB1  3B C6                     CMP EAX,ESI
0070AEB3  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0070AEB6  75 1B                     JNZ 0x0070aed3
0070AEB8  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0070AEBE  68 B0 01 00 00            PUSH 0x1b0
0070AEC3  68 E0 FF 7E 00            PUSH 0x7effe0
0070AEC8  52                        PUSH EDX
0070AEC9  6A FC                     PUSH -0x4
0070AECB  E8 70 AF F9 FF            CALL 0x006a5e40
0070AED0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_0070aed3:
0070AED3  0F BF 40 23               MOVSX EAX,word ptr [EAX + 0x23]
0070AED7  8D 04 85 34 00 00 00      LEA EAX,[EAX*0x4 + 0x34]
0070AEDE  50                        PUSH EAX
0070AEDF  E8 2C FD F9 FF            CALL 0x006aac10
0070AEE4  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0070AEE7  B9 0C 00 00 00            MOV ECX,0xc
0070AEEC  8B F8                     MOV EDI,EAX
0070AEEE  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0070AEF1  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0070AEF4  F3 A5                     MOVSD.REP ES:EDI,ESI
0070AEF6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0070AEF9  33 F6                     XOR ESI,ESI
0070AEFB  3B C6                     CMP EAX,ESI
0070AEFD  89 59 25                  MOV dword ptr [ECX + 0x25],EBX
0070AF00  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0070AF03  66 C7 42 29 FF FF         MOV word ptr [EDX + 0x29],0xffff
0070AF09  0F 84 1F 01 00 00         JZ 0x0070b02e
0070AF0F  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
0070AF12  3B FE                     CMP EDI,ESI
0070AF14  0F 84 14 01 00 00         JZ 0x0070b02e
0070AF1A  3B C6                     CMP EAX,ESI
0070AF1C  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0070AF1F  0F 8E E4 01 00 00         JLE 0x0070b109
0070AF25  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0070af28:
0070AF28  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0070AF2B  0F BF 48 21               MOVSX ECX,word ptr [EAX + 0x21]
0070AF2F  8B 34 97                  MOV ESI,dword ptr [EDI + EDX*0x4]
0070AF32  2B F1                     SUB ESI,ECX
0070AF34  78 08                     JS 0x0070af3e
0070AF36  0F BF 48 23               MOVSX ECX,word ptr [EAX + 0x23]
0070AF3A  3B F1                     CMP ESI,ECX
0070AF3C  7C 1B                     JL 0x0070af59
LAB_0070af3e:
0070AF3E  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0070AF44  68 BC 01 00 00            PUSH 0x1bc
0070AF49  68 E0 FF 7E 00            PUSH 0x7effe0
0070AF4E  52                        PUSH EDX
0070AF4F  6A FA                     PUSH -0x6
0070AF51  E8 EA AE F9 FF            CALL 0x006a5e40
0070AF56  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0070af59:
0070AF59  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0070AF5C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0070AF5F  51                        PUSH ECX
0070AF60  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0070AF63  52                        PUSH EDX
0070AF64  8B 14 8F                  MOV EDX,dword ptr [EDI + ECX*0x4]
0070AF67  33 C9                     XOR ECX,ECX
0070AF69  8A 48 20                  MOV CL,byte ptr [EAX + 0x20]
0070AF6C  52                        PUSH EDX
0070AF6D  51                        PUSH ECX
0070AF6E  50                        PUSH EAX
0070AF6F  E8 8C 7C FE FF            CALL 0x006f2c00
0070AF74  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0070AF77  83 C4 0C                  ADD ESP,0xc
0070AF7A  50                        PUSH EAX
0070AF7B  8A 42 2B                  MOV AL,byte ptr [EDX + 0x2b]
0070AF7E  50                        PUSH EAX
0070AF7F  53                        PUSH EBX
0070AF80  E8 1B F6 FF FF            CALL 0x0070a5a0
0070AF85  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0070AF88  83 C4 14                  ADD ESP,0x14
0070AF8B  89 44 B1 30               MOV dword ptr [ECX + ESI*0x4 + 0x30],EAX
0070AF8F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070AF92  8B 4C B0 30               MOV ECX,dword ptr [EAX + ESI*0x4 + 0x30]
0070AF96  85 C9                     TEST ECX,ECX
0070AF98  75 1B                     JNZ 0x0070afb5
0070AF9A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0070AFA0  68 BE 01 00 00            PUSH 0x1be
0070AFA5  68 E0 FF 7E 00            PUSH 0x7effe0
0070AFAA  52                        PUSH EDX
0070AFAB  6A FC                     PUSH -0x4
0070AFAD  E8 8E AE F9 FF            CALL 0x006a5e40
0070AFB2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0070afb5:
0070AFB5  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0070AFB8  85 F6                     TEST ESI,ESI
0070AFBA  75 5E                     JNZ 0x0070b01a
0070AFBC  8B 0F                     MOV ECX,dword ptr [EDI]
0070AFBE  33 D2                     XOR EDX,EDX
0070AFC0  8A 50 20                  MOV DL,byte ptr [EAX + 0x20]
0070AFC3  6A 01                     PUSH 0x1
0070AFC5  51                        PUSH ECX
0070AFC6  52                        PUSH EDX
0070AFC7  50                        PUSH EAX
0070AFC8  E8 33 7C FE FF            CALL 0x006f2c00
0070AFCD  83 C4 0C                  ADD ESP,0xc
0070AFD0  50                        PUSH EAX
0070AFD1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070AFD4  8A 48 2B                  MOV CL,byte ptr [EAX + 0x2b]
0070AFD7  51                        PUSH ECX
0070AFD8  53                        PUSH EBX
0070AFD9  E8 12 F7 FF FF            CALL 0x0070a6f0
0070AFDE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0070AFE1  83 C4 10                  ADD ESP,0x10
0070AFE4  33 C9                     XOR ECX,ECX
0070AFE6  66 89 42 2C               MOV word ptr [EDX + 0x2c],AX
0070AFEA  8B 07                     MOV EAX,dword ptr [EDI]
0070AFEC  6A 01                     PUSH 0x1
0070AFEE  50                        PUSH EAX
0070AFEF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070AFF2  8A 48 20                  MOV CL,byte ptr [EAX + 0x20]
0070AFF5  51                        PUSH ECX
0070AFF6  50                        PUSH EAX
0070AFF7  E8 04 7C FE FF            CALL 0x006f2c00
0070AFFC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0070AFFF  83 C4 0C                  ADD ESP,0xc
0070B002  50                        PUSH EAX
0070B003  8A 42 2B                  MOV AL,byte ptr [EDX + 0x2b]
0070B006  50                        PUSH EAX
0070B007  53                        PUSH EBX
0070B008  E8 A3 F7 FF FF            CALL 0x0070a7b0
0070B00D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0070B010  83 C4 10                  ADD ESP,0x10
0070B013  66 89 41 2E               MOV word ptr [ECX + 0x2e],AX
0070B017  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0070b01a:
0070B01A  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0070B01D  46                        INC ESI
0070B01E  3B F1                     CMP ESI,ECX
0070B020  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0070B023  0F 8C FF FE FF FF         JL 0x0070af28
0070B029  E9 DB 00 00 00            JMP 0x0070b109
LAB_0070b02e:
0070B02E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070B031  66 39 70 23               CMP word ptr [EAX + 0x23],SI
0070B035  0F 8E CE 00 00 00         JLE 0x0070b109
0070B03B  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
LAB_0070b03e:
0070B03E  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0070B041  0F BF 48 21               MOVSX ECX,word ptr [EAX + 0x21]
0070B045  52                        PUSH EDX
0070B046  33 D2                     XOR EDX,EDX
0070B048  8A 50 20                  MOV DL,byte ptr [EAX + 0x20]
0070B04B  03 CE                     ADD ECX,ESI
0070B04D  57                        PUSH EDI
0070B04E  51                        PUSH ECX
0070B04F  52                        PUSH EDX
0070B050  50                        PUSH EAX
0070B051  E8 AA 7B FE FF            CALL 0x006f2c00
0070B056  83 C4 0C                  ADD ESP,0xc
0070B059  50                        PUSH EAX
0070B05A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070B05D  8A 48 2B                  MOV CL,byte ptr [EAX + 0x2b]
0070B060  51                        PUSH ECX
0070B061  53                        PUSH EBX
0070B062  E8 39 F5 FF FF            CALL 0x0070a5a0
0070B067  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0070B06A  83 C4 14                  ADD ESP,0x14
0070B06D  89 44 B2 30               MOV dword ptr [EDX + ESI*0x4 + 0x30],EAX
0070B071  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070B074  8B 4C B0 30               MOV ECX,dword ptr [EAX + ESI*0x4 + 0x30]
0070B078  85 C9                     TEST ECX,ECX
0070B07A  75 1A                     JNZ 0x0070b096
0070B07C  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0070B081  68 C8 01 00 00            PUSH 0x1c8
0070B086  68 E0 FF 7E 00            PUSH 0x7effe0
0070B08B  50                        PUSH EAX
0070B08C  6A FC                     PUSH -0x4
0070B08E  E8 AD AD F9 FF            CALL 0x006a5e40
0070B093  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0070b096:
0070B096  85 F6                     TEST ESI,ESI
0070B098  75 62                     JNZ 0x0070b0fc
0070B09A  0F BF 48 21               MOVSX ECX,word ptr [EAX + 0x21]
0070B09E  33 D2                     XOR EDX,EDX
0070B0A0  6A 01                     PUSH 0x1
0070B0A2  8A 50 20                  MOV DL,byte ptr [EAX + 0x20]
0070B0A5  51                        PUSH ECX
0070B0A6  52                        PUSH EDX
0070B0A7  50                        PUSH EAX
0070B0A8  E8 53 7B FE FF            CALL 0x006f2c00
0070B0AD  83 C4 0C                  ADD ESP,0xc
0070B0B0  50                        PUSH EAX
0070B0B1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070B0B4  8A 48 2B                  MOV CL,byte ptr [EAX + 0x2b]
0070B0B7  51                        PUSH ECX
0070B0B8  53                        PUSH EBX
0070B0B9  E8 32 F6 FF FF            CALL 0x0070a6f0
0070B0BE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0070B0C1  83 C4 10                  ADD ESP,0x10
0070B0C4  66 89 42 2C               MOV word ptr [EDX + 0x2c],AX
0070B0C8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070B0CB  33 D2                     XOR EDX,EDX
0070B0CD  6A 01                     PUSH 0x1
0070B0CF  0F BF 48 21               MOVSX ECX,word ptr [EAX + 0x21]
0070B0D3  8A 50 20                  MOV DL,byte ptr [EAX + 0x20]
0070B0D6  51                        PUSH ECX
0070B0D7  52                        PUSH EDX
0070B0D8  50                        PUSH EAX
0070B0D9  E8 22 7B FE FF            CALL 0x006f2c00
0070B0DE  83 C4 0C                  ADD ESP,0xc
0070B0E1  50                        PUSH EAX
0070B0E2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070B0E5  8A 48 2B                  MOV CL,byte ptr [EAX + 0x2b]
0070B0E8  51                        PUSH ECX
0070B0E9  53                        PUSH EBX
0070B0EA  E8 C1 F6 FF FF            CALL 0x0070a7b0
0070B0EF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0070B0F2  83 C4 10                  ADD ESP,0x10
0070B0F5  66 89 42 2E               MOV word ptr [EDX + 0x2e],AX
0070B0F9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0070b0fc:
0070B0FC  0F BF 48 23               MOVSX ECX,word ptr [EAX + 0x23]
0070B100  46                        INC ESI
0070B101  3B F1                     CMP ESI,ECX
0070B103  0F 8C 35 FF FF FF         JL 0x0070b03e
LAB_0070b109:
0070B109  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0070B10C  8D 45 F8                  LEA EAX,[EBP + -0x8]
0070B10F  50                        PUSH EAX
0070B110  8B CB                     MOV ECX,EBX
0070B112  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0070B118  E8 C3 6F FE FF            CALL 0x006f20e0
0070B11D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070B120  5F                        POP EDI
0070B121  5E                        POP ESI
0070B122  5B                        POP EBX
0070B123  8B E5                     MOV ESP,EBP
0070B125  5D                        POP EBP
0070B126  C3                        RET
LAB_0070b127:
0070B127  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0070B12A  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0070B12D  8D 55 F8                  LEA EDX,[EBP + -0x8]
0070B130  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070B136  52                        PUSH EDX
0070B137  8B CF                     MOV ECX,EDI
0070B139  E8 A2 6F FE FF            CALL 0x006f20e0
0070B13E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070B141  3B C6                     CMP EAX,ESI
0070B143  74 31                     JZ 0x0070b176
0070B145  66 83 78 23 00            CMP word ptr [EAX + 0x23],0x0
0070B14A  7E 21                     JLE 0x0070b16d
0070B14C  BB 30 00 00 00            MOV EBX,0x30
LAB_0070b151:
0070B151  03 C3                     ADD EAX,EBX
0070B153  8B CF                     MOV ECX,EDI
0070B155  50                        PUSH EAX
0070B156  E8 85 6F FE FF            CALL 0x006f20e0
0070B15B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070B15E  46                        INC ESI
0070B15F  83 C3 04                  ADD EBX,0x4
0070B162  0F BF 48 23               MOVSX ECX,word ptr [EAX + 0x23]
0070B166  3B F1                     CMP ESI,ECX
0070B168  7C E7                     JL 0x0070b151
0070B16A  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
LAB_0070b16d:
0070B16D  8D 55 FC                  LEA EDX,[EBP + -0x4]
0070B170  52                        PUSH EDX
0070B171  E8 EA FE F9 FF            CALL 0x006ab060
LAB_0070b176:
0070B176  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0070B179  85 C0                     TEST EAX,EAX
0070B17B  75 05                     JNZ 0x0070b182
0070B17D  83 FB FC                  CMP EBX,-0x4
0070B180  74 36                     JZ 0x0070b1b8
LAB_0070b182:
0070B182  68 80 00 7F 00            PUSH 0x7f0080
0070B187  68 CC 4C 7A 00            PUSH 0x7a4ccc
0070B18C  53                        PUSH EBX
0070B18D  6A 00                     PUSH 0x0
0070B18F  68 D8 01 00 00            PUSH 0x1d8
0070B194  68 E0 FF 7E 00            PUSH 0x7effe0
0070B199  E8 32 23 FA FF            CALL 0x006ad4d0
0070B19E  83 C4 18                  ADD ESP,0x18
0070B1A1  85 C0                     TEST EAX,EAX
0070B1A3  74 01                     JZ 0x0070b1a6
0070B1A5  CC                        INT3
LAB_0070b1a6:
0070B1A6  68 DA 01 00 00            PUSH 0x1da
0070B1AB  68 E0 FF 7E 00            PUSH 0x7effe0
0070B1B0  6A 00                     PUSH 0x0
0070B1B2  53                        PUSH EBX
0070B1B3  E8 88 AC F9 FF            CALL 0x006a5e40
LAB_0070b1b8:
0070B1B8  5F                        POP EDI
0070B1B9  5E                        POP ESI
0070B1BA  33 C0                     XOR EAX,EAX
0070B1BC  5B                        POP EBX
0070B1BD  8B E5                     MOV ESP,EBP
0070B1BF  5D                        POP EBP
0070B1C0  C3                        RET
