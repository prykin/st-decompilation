FUN_0058bd90:
0058BD90  55                        PUSH EBP
0058BD91  8B EC                     MOV EBP,ESP
0058BD93  51                        PUSH ECX
0058BD94  56                        PUSH ESI
0058BD95  8B F1                     MOV ESI,ECX
0058BD97  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0058BD9E  83 BE 31 02 00 00 01      CMP dword ptr [ESI + 0x231],0x1
0058BDA5  0F 84 FF 05 00 00         JZ 0x0058c3aa
0058BDAB  66 8B 46 41               MOV AX,word ptr [ESI + 0x41]
0058BDAF  66 85 C0                  TEST AX,AX
0058BDB2  0F BF C8                  MOVSX ECX,AX
0058BDB5  B8 79 19 8C 02            MOV EAX,0x28c1979
0058BDBA  7C 10                     JL 0x0058bdcc
0058BDBC  F7 E9                     IMUL ECX
0058BDBE  D1 FA                     SAR EDX,0x1
0058BDC0  8B C2                     MOV EAX,EDX
0058BDC2  C1 E8 1F                  SHR EAX,0x1f
0058BDC5  03 D0                     ADD EDX,EAX
0058BDC7  0F BF C2                  MOVSX EAX,DX
0058BDCA  EB 0F                     JMP 0x0058bddb
LAB_0058bdcc:
0058BDCC  F7 E9                     IMUL ECX
0058BDCE  D1 FA                     SAR EDX,0x1
0058BDD0  8B CA                     MOV ECX,EDX
0058BDD2  C1 E9 1F                  SHR ECX,0x1f
0058BDD5  03 D1                     ADD EDX,ECX
0058BDD7  0F BF C2                  MOVSX EAX,DX
0058BDDA  48                        DEC EAX
LAB_0058bddb:
0058BDDB  66 89 46 47               MOV word ptr [ESI + 0x47],AX
0058BDDF  66 89 46 5B               MOV word ptr [ESI + 0x5b],AX
0058BDE3  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
0058BDE7  66 85 C0                  TEST AX,AX
0058BDEA  0F BF C8                  MOVSX ECX,AX
0058BDED  B8 79 19 8C 02            MOV EAX,0x28c1979
0058BDF2  7C 10                     JL 0x0058be04
0058BDF4  F7 E9                     IMUL ECX
0058BDF6  D1 FA                     SAR EDX,0x1
0058BDF8  8B C2                     MOV EAX,EDX
0058BDFA  C1 E8 1F                  SHR EAX,0x1f
0058BDFD  03 D0                     ADD EDX,EAX
0058BDFF  0F BF C2                  MOVSX EAX,DX
0058BE02  EB 0F                     JMP 0x0058be13
LAB_0058be04:
0058BE04  F7 E9                     IMUL ECX
0058BE06  D1 FA                     SAR EDX,0x1
0058BE08  8B CA                     MOV ECX,EDX
0058BE0A  C1 E9 1F                  SHR ECX,0x1f
0058BE0D  03 D1                     ADD EDX,ECX
0058BE0F  0F BF C2                  MOVSX EAX,DX
0058BE12  48                        DEC EAX
LAB_0058be13:
0058BE13  66 89 46 49               MOV word ptr [ESI + 0x49],AX
0058BE17  66 89 46 5D               MOV word ptr [ESI + 0x5d],AX
0058BE1B  66 8B 46 45               MOV AX,word ptr [ESI + 0x45]
0058BE1F  66 85 C0                  TEST AX,AX
0058BE22  0F BF C8                  MOVSX ECX,AX
0058BE25  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0058BE2A  7C 11                     JL 0x0058be3d
0058BE2C  F7 E9                     IMUL ECX
0058BE2E  C1 FA 06                  SAR EDX,0x6
0058BE31  8B C2                     MOV EAX,EDX
0058BE33  C1 E8 1F                  SHR EAX,0x1f
0058BE36  03 D0                     ADD EDX,EAX
0058BE38  0F BF C2                  MOVSX EAX,DX
0058BE3B  EB 10                     JMP 0x0058be4d
LAB_0058be3d:
0058BE3D  F7 E9                     IMUL ECX
0058BE3F  C1 FA 06                  SAR EDX,0x6
0058BE42  8B CA                     MOV ECX,EDX
0058BE44  C1 E9 1F                  SHR ECX,0x1f
0058BE47  03 D1                     ADD EDX,ECX
0058BE49  0F BF C2                  MOVSX EAX,DX
0058BE4C  48                        DEC EAX
LAB_0058be4d:
0058BE4D  53                        PUSH EBX
0058BE4E  57                        PUSH EDI
0058BE4F  8B CE                     MOV ECX,ESI
0058BE51  66 89 46 4B               MOV word ptr [ESI + 0x4b],AX
0058BE55  66 89 46 5F               MOV word ptr [ESI + 0x5f],AX
0058BE59  E8 DE 5B E7 FF            CALL 0x00401a3c
0058BE5E  85 C0                     TEST EAX,EAX
0058BE60  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
0058BE66  74 19                     JZ 0x0058be81
0058BE68  6A 01                     PUSH 0x1
0058BE6A  8B CF                     MOV ECX,EDI
0058BE6C  E8 5B 94 E7 FF            CALL 0x004052cc
0058BE71  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0058BE77  50                        PUSH EAX
0058BE78  E8 73 ED 15 00            CALL 0x006eabf0
0058BE7D  6A 01                     PUSH 0x1
0058BE7F  EB 26                     JMP 0x0058bea7
LAB_0058be81:
0058BE81  6A 00                     PUSH 0x0
0058BE83  8B CF                     MOV ECX,EDI
0058BE85  E8 42 94 E7 FF            CALL 0x004052cc
0058BE8A  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0058BE90  50                        PUSH EAX
0058BE91  E8 5A ED 15 00            CALL 0x006eabf0
0058BE96  8B CE                     MOV ECX,ESI
0058BE98  E8 3B 92 E7 FF            CALL 0x004050d8
0058BE9D  83 F8 01                  CMP EAX,0x1
0058BEA0  75 03                     JNZ 0x0058bea5
0058BEA2  50                        PUSH EAX
0058BEA3  EB 02                     JMP 0x0058bea7
LAB_0058bea5:
0058BEA5  6A 00                     PUSH 0x0
LAB_0058bea7:
0058BEA7  8B CF                     MOV ECX,EDI
0058BEA9  E8 1E 94 E7 FF            CALL 0x004052cc
0058BEAE  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0058BEB4  50                        PUSH EAX
0058BEB5  E8 B6 A9 15 00            CALL 0x006e6870
0058BEBA  8B 86 31 02 00 00         MOV EAX,dword ptr [ESI + 0x231]
0058BEC0  83 F8 06                  CMP EAX,0x6
0058BEC3  0F 87 C8 04 00 00         JA 0x0058c391
switchD_0058bec9::switchD:
0058BEC9  FF 24 85 B0 C3 58 00      JMP dword ptr [EAX*0x4 + 0x58c3b0]
switchD_0058bec9::caseD_6:
0058BED0  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
0058BED6  6A 08                     PUSH 0x8
0058BED8  8B CF                     MOV ECX,EDI
0058BEDA  E8 CD 63 E7 FF            CALL 0x004022ac
0058BEDF  8B D8                     MOV EBX,EAX
0058BEE1  6A 08                     PUSH 0x8
0058BEE3  8B CF                     MOV ECX,EDI
0058BEE5  4B                        DEC EBX
0058BEE6  E8 C4 83 E7 FF            CALL 0x004042af
0058BEEB  3B C3                     CMP EAX,EBX
0058BEED  7C 07                     JL 0x0058bef6
0058BEEF  8B CE                     MOV ECX,ESI
0058BEF1  E8 BC 99 E7 FF            CALL 0x004058b2
switchD_0058bec9::caseD_0:
0058BEF6  66 8B 46 41               MOV AX,word ptr [ESI + 0x41]
0058BEFA  66 83 46 45 12            ADD word ptr [ESI + 0x45],0x12
0058BEFF  66 8B 5E 45               MOV BX,word ptr [ESI + 0x45]
0058BF03  66 85 C0                  TEST AX,AX
0058BF06  0F BF C8                  MOVSX ECX,AX
0058BF09  B8 79 19 8C 02            MOV EAX,0x28c1979
0058BF0E  7C 10                     JL 0x0058bf20
0058BF10  F7 E9                     IMUL ECX
0058BF12  D1 FA                     SAR EDX,0x1
0058BF14  8B C2                     MOV EAX,EDX
0058BF16  C1 E8 1F                  SHR EAX,0x1f
0058BF19  03 D0                     ADD EDX,EAX
0058BF1B  0F BF FA                  MOVSX EDI,DX
0058BF1E  EB 0F                     JMP 0x0058bf2f
LAB_0058bf20:
0058BF20  F7 E9                     IMUL ECX
0058BF22  D1 FA                     SAR EDX,0x1
0058BF24  8B CA                     MOV ECX,EDX
0058BF26  C1 E9 1F                  SHR ECX,0x1f
0058BF29  03 D1                     ADD EDX,ECX
0058BF2B  0F BF FA                  MOVSX EDI,DX
0058BF2E  4F                        DEC EDI
LAB_0058bf2f:
0058BF2F  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
0058BF33  66 85 C0                  TEST AX,AX
0058BF36  0F BF C8                  MOVSX ECX,AX
0058BF39  B8 79 19 8C 02            MOV EAX,0x28c1979
0058BF3E  7C 10                     JL 0x0058bf50
0058BF40  F7 E9                     IMUL ECX
0058BF42  D1 FA                     SAR EDX,0x1
0058BF44  8B C2                     MOV EAX,EDX
0058BF46  C1 E8 1F                  SHR EAX,0x1f
0058BF49  03 D0                     ADD EDX,EAX
0058BF4B  0F BF CA                  MOVSX ECX,DX
0058BF4E  EB 0F                     JMP 0x0058bf5f
LAB_0058bf50:
0058BF50  F7 E9                     IMUL ECX
0058BF52  D1 FA                     SAR EDX,0x1
0058BF54  8B CA                     MOV ECX,EDX
0058BF56  C1 E9 1F                  SHR ECX,0x1f
0058BF59  03 D1                     ADD EDX,ECX
0058BF5B  0F BF CA                  MOVSX ECX,DX
0058BF5E  49                        DEC ECX
LAB_0058bf5f:
0058BF5F  66 85 DB                  TEST BX,BX
0058BF62  0F BF D3                  MOVSX EDX,BX
0058BF65  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0058BF6A  7C 11                     JL 0x0058bf7d
0058BF6C  F7 EA                     IMUL EDX
0058BF6E  C1 FA 06                  SAR EDX,0x6
0058BF71  8B C2                     MOV EAX,EDX
0058BF73  C1 E8 1F                  SHR EAX,0x1f
0058BF76  03 D0                     ADD EDX,EAX
0058BF78  0F BF C2                  MOVSX EAX,DX
0058BF7B  EB 10                     JMP 0x0058bf8d
LAB_0058bf7d:
0058BF7D  F7 EA                     IMUL EDX
0058BF7F  C1 FA 06                  SAR EDX,0x6
0058BF82  8B C2                     MOV EAX,EDX
0058BF84  C1 E8 1F                  SHR EAX,0x1f
0058BF87  03 D0                     ADD EDX,EAX
0058BF89  0F BF C2                  MOVSX EAX,DX
0058BF8C  48                        DEC EAX
LAB_0058bf8d:
0058BF8D  66 85 FF                  TEST DI,DI
0058BF90  0F 8C D0 00 00 00         JL 0x0058c066
0058BF96  66 3B 3D 40 B2 7F 00      CMP DI,word ptr [0x007fb240]
0058BF9D  0F 8D C3 00 00 00         JGE 0x0058c066
0058BFA3  66 85 C9                  TEST CX,CX
0058BFA6  0F 8C BA 00 00 00         JL 0x0058c066
0058BFAC  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
0058BFB3  0F 8D AD 00 00 00         JGE 0x0058c066
0058BFB9  66 85 C0                  TEST AX,AX
0058BFBC  0F 8C A4 00 00 00         JL 0x0058c066
0058BFC2  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
0058BFC9  0F 8D 97 00 00 00         JGE 0x0058c066
0058BFCF  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
0058BFD6  0F BF D8                  MOVSX EBX,AX
0058BFD9  0F AF D3                  IMUL EDX,EBX
0058BFDC  0F BF 1D 40 B2 7F 00      MOVSX EBX,word ptr [0x007fb240]
0058BFE3  0F BF C9                  MOVSX ECX,CX
0058BFE6  0F AF D9                  IMUL EBX,ECX
0058BFE9  0F BF CF                  MOVSX ECX,DI
0058BFEC  03 D3                     ADD EDX,EBX
0058BFEE  03 D1                     ADD EDX,ECX
0058BFF0  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0058BFF6  8B 0C D1                  MOV ECX,dword ptr [ECX + EDX*0x8]
0058BFF9  85 C9                     TEST ECX,ECX
0058BFFB  74 69                     JZ 0x0058c066
0058BFFD  81 79 20 90 01 00 00      CMP dword ptr [ECX + 0x20],0x190
0058C004  74 60                     JZ 0x0058c066
0058C006  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
0058C00C  6A 0E                     PUSH 0xe
0058C00E  8B CF                     MOV ECX,EDI
0058C010  C7 86 31 02 00 00 05 00 00 00  MOV dword ptr [ESI + 0x231],0x5
0058C01A  E8 45 82 E7 FF            CALL 0x00404264
0058C01F  8B CF                     MOV ECX,EDI
0058C021  E8 6A 6A E7 FF            CALL 0x00402a90
0058C026  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
0058C02C  6A 1D                     PUSH 0x1d
0058C02E  68 AC BA 7C 00            PUSH 0x7cbaac
0058C033  52                        PUSH EDX
0058C034  6A 08                     PUSH 0x8
0058C036  8B CF                     MOV ECX,EDI
0058C038  E8 46 81 E7 FF            CALL 0x00404183
0058C03D  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0058C042  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
0058C048  51                        PUSH ECX
0058C049  6A 08                     PUSH 0x8
0058C04B  8B CF                     MOV ECX,EDI
0058C04D  E8 EE 91 E7 FF            CALL 0x00405240
0058C052  66 83 46 45 12            ADD word ptr [ESI + 0x45],0x12
0058C057  C7 86 31 02 00 00 06 00 00 00  MOV dword ptr [ESI + 0x231],0x6
0058C061  E9 2B 03 00 00            JMP 0x0058c391
LAB_0058c066:
0058C066  83 F8 05                  CMP EAX,0x5
0058C069  7E 7F                     JLE 0x0058c0ea
0058C06B  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0058C070  BA 03 00 00 00            MOV EDX,0x3
0058C075  84 90 E4 00 00 00         TEST byte ptr [EAX + 0xe4],DL
0058C07B  75 6D                     JNZ 0x0058c0ea
0058C07D  8B 86 39 02 00 00         MOV EAX,dword ptr [ESI + 0x239]
0058C083  40                        INC EAX
0058C084  89 86 39 02 00 00         MOV dword ptr [ESI + 0x239],EAX
0058C08A  8B C8                     MOV ECX,EAX
0058C08C  A1 24 67 80 00            MOV EAX,[0x00806724]
0058C091  0F BF 78 23               MOVSX EDI,word ptr [EAX + 0x23]
0058C095  3B CF                     CMP ECX,EDI
0058C097  7C 3C                     JL 0x0058c0d5
0058C099  8B 86 31 02 00 00         MOV EAX,dword ptr [ESI + 0x231]
0058C09F  C7 86 39 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x239],0x0
0058C0A9  3B C2                     CMP EAX,EDX
0058C0AB  C7 86 31 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x231],0x1
0058C0B5  0F 85 D6 02 00 00         JNZ 0x0058c391
0058C0BB  8B 8E 4D 02 00 00         MOV ECX,dword ptr [ESI + 0x24d]
0058C0C1  8B 96 49 02 00 00         MOV EDX,dword ptr [ESI + 0x249]
0058C0C7  51                        PUSH ECX
0058C0C8  52                        PUSH EDX
0058C0C9  8B CE                     MOV ECX,ESI
0058C0CB  E8 23 61 E7 FF            CALL 0x004021f3
0058C0D0  E9 BC 02 00 00            JMP 0x0058c391
LAB_0058c0d5:
0058C0D5  0F BF 50 2C               MOVSX EDX,word ptr [EAX + 0x2c]
0058C0D9  8B 44 88 30               MOV EAX,dword ptr [EAX + ECX*0x4 + 0x30]
0058C0DD  52                        PUSH EDX
0058C0DE  50                        PUSH EAX
0058C0DF  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
0058C0E5  E8 83 50 E7 FF            CALL 0x0040116d
LAB_0058c0ea:
0058C0EA  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0058C0F0  F6 81 E4 00 00 00 01      TEST byte ptr [ECX + 0xe4],0x1
0058C0F7  0F 85 94 02 00 00         JNZ 0x0058c391
0058C0FD  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
0058C103  6A 0E                     PUSH 0xe
0058C105  8B CF                     MOV ECX,EDI
0058C107  E8 A3 81 E7 FF            CALL 0x004042af
0058C10C  40                        INC EAX
0058C10D  83 F8 19                  CMP EAX,0x19
0058C110  7C 05                     JL 0x0058c117
0058C112  B8 18 00 00 00            MOV EAX,0x18
LAB_0058c117:
0058C117  50                        PUSH EAX
0058C118  6A 0E                     PUSH 0xe
0058C11A  8B CF                     MOV ECX,EDI
0058C11C  E9 6B 02 00 00            JMP 0x0058c38c
switchD_0058bec9::caseD_4:
0058C121  8D 9E D5 01 00 00         LEA EBX,[ESI + 0x1d5]
0058C127  6A 0E                     PUSH 0xe
0058C129  8B CB                     MOV ECX,EBX
0058C12B  E8 7F 81 E7 FF            CALL 0x004042af
0058C130  8B F8                     MOV EDI,EAX
0058C132  47                        INC EDI
0058C133  83 FF 23                  CMP EDI,0x23
0058C136  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0058C139  7D 0C                     JGE 0x0058c147
0058C13B  57                        PUSH EDI
0058C13C  6A 0E                     PUSH 0xe
0058C13E  8B CB                     MOV ECX,EBX
0058C140  E8 1F 4F E7 FF            CALL 0x00401064
0058C145  EB 15                     JMP 0x0058c15c
LAB_0058c147:
0058C147  6A 18                     PUSH 0x18
0058C149  6A 0E                     PUSH 0xe
0058C14B  8B CB                     MOV ECX,EBX
0058C14D  E8 12 4F E7 FF            CALL 0x00401064
0058C152  C7 86 31 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x231],0x2
LAB_0058c15c:
0058C15C  83 FF 20                  CMP EDI,0x20
0058C15F  75 07                     JNZ 0x0058c168
0058C161  8B CE                     MOV ECX,ESI
0058C163  E8 D4 67 E7 FF            CALL 0x0040293c
switchD_0058bec9::caseD_2:
0058C168  83 BE 31 02 00 00 02      CMP dword ptr [ESI + 0x231],0x2
0058C16F  75 07                     JNZ 0x0058c178
0058C171  C7 45 FC 18 00 00 00      MOV dword ptr [EBP + -0x4],0x18
LAB_0058c178:
0058C178  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0058C17E  F6 82 E4 00 00 00 03      TEST byte ptr [EDX + 0xe4],0x3
0058C185  0F 85 10 01 00 00         JNZ 0x0058c29b
0058C18B  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
0058C191  33 C9                     XOR ECX,ECX
0058C193  3B C1                     CMP EAX,ECX
0058C195  74 6D                     JZ 0x0058c204
0058C197  8B BE 39 02 00 00         MOV EDI,dword ptr [ESI + 0x239]
0058C19D  4F                        DEC EDI
0058C19E  8B C7                     MOV EAX,EDI
0058C1A0  89 BE 39 02 00 00         MOV dword ptr [ESI + 0x239],EDI
0058C1A6  3B C1                     CMP EAX,ECX
0058C1A8  7F 2C                     JG 0x0058c1d6
0058C1AA  89 8E 39 02 00 00         MOV dword ptr [ESI + 0x239],ECX
0058C1B0  89 8E 35 02 00 00         MOV dword ptr [ESI + 0x235],ECX
0058C1B6  6A 0E                     PUSH 0xe
0058C1B8  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
0058C1BE  E8 17 7E E7 FF            CALL 0x00403fda
0058C1C3  8B 8E 3D 02 00 00         MOV ECX,dword ptr [ESI + 0x23d]
0058C1C9  F7 D9                     NEG ECX
0058C1CB  89 8E 41 02 00 00         MOV dword ptr [ESI + 0x241],ECX
0058C1D1  E9 C5 00 00 00            JMP 0x0058c29b
LAB_0058c1d6:
0058C1D6  8B 0D 24 67 80 00         MOV ECX,dword ptr [0x00806724]
0058C1DC  0F BF 51 2C               MOVSX EDX,word ptr [ECX + 0x2c]
0058C1E0  8B 44 81 30               MOV EAX,dword ptr [ECX + EAX*0x4 + 0x30]
0058C1E4  52                        PUSH EDX
0058C1E5  50                        PUSH EAX
0058C1E6  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
0058C1EC  E8 7C 4F E7 FF            CALL 0x0040116d
0058C1F1  8B 8E 3D 02 00 00         MOV ECX,dword ptr [ESI + 0x23d]
0058C1F7  F7 D9                     NEG ECX
0058C1F9  89 8E 41 02 00 00         MOV dword ptr [ESI + 0x241],ECX
0058C1FF  E9 97 00 00 00            JMP 0x0058c29b
LAB_0058c204:
0058C204  8B 96 3D 02 00 00         MOV EDX,dword ptr [ESI + 0x23d]
0058C20A  8B 86 41 02 00 00         MOV EAX,dword ptr [ESI + 0x241]
0058C210  3B D0                     CMP EDX,EAX
0058C212  0F 8D 83 00 00 00         JGE 0x0058c29b
0058C218  8B 96 39 02 00 00         MOV EDX,dword ptr [ESI + 0x239]
0058C21E  42                        INC EDX
0058C21F  89 96 39 02 00 00         MOV dword ptr [ESI + 0x239],EDX
0058C225  8B 0D 24 67 80 00         MOV ECX,dword ptr [0x00806724]
0058C22B  8B C2                     MOV EAX,EDX
0058C22D  0F BF 51 23               MOVSX EDX,word ptr [ECX + 0x23]
0058C231  3B C2                     CMP EAX,EDX
0058C233  7C 3B                     JL 0x0058c270
0058C235  8B 86 49 02 00 00         MOV EAX,dword ptr [ESI + 0x249]
0058C23B  8B BE 51 02 00 00         MOV EDI,dword ptr [ESI + 0x251]
0058C241  8B 8E 4D 02 00 00         MOV ECX,dword ptr [ESI + 0x24d]
0058C247  C7 86 31 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x231],0x1
0058C251  D1 E0                     SHL EAX,0x1
0058C253  2B C7                     SUB EAX,EDI
0058C255  89 86 51 02 00 00         MOV dword ptr [ESI + 0x251],EAX
0058C25B  8B 86 55 02 00 00         MOV EAX,dword ptr [ESI + 0x255]
0058C261  D1 E1                     SHL ECX,0x1
0058C263  2B C8                     SUB ECX,EAX
0058C265  89 8E 55 02 00 00         MOV dword ptr [ESI + 0x255],ECX
0058C26B  E9 21 01 00 00            JMP 0x0058c391
LAB_0058c270:
0058C270  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
0058C276  6A 0E                     PUSH 0xe
0058C278  8B CF                     MOV ECX,EDI
0058C27A  E8 2F 59 E7 FF            CALL 0x00401bae
0058C27F  A1 24 67 80 00            MOV EAX,[0x00806724]
0058C284  8B 8E 39 02 00 00         MOV ECX,dword ptr [ESI + 0x239]
0058C28A  0F BF 50 2C               MOVSX EDX,word ptr [EAX + 0x2c]
0058C28E  52                        PUSH EDX
0058C28F  8B 54 88 30               MOV EDX,dword ptr [EAX + ECX*0x4 + 0x30]
0058C293  52                        PUSH EDX
0058C294  8B CF                     MOV ECX,EDI
0058C296  E8 D2 4E E7 FF            CALL 0x0040116d
LAB_0058c29b:
0058C29B  8B 86 59 02 00 00         MOV EAX,dword ptr [ESI + 0x259]
0058C2A1  8B 8E 5D 02 00 00         MOV ECX,dword ptr [ESI + 0x25d]
0058C2A7  8B 9E 61 02 00 00         MOV EBX,dword ptr [ESI + 0x261]
0058C2AD  8B BE 65 02 00 00         MOV EDI,dword ptr [ESI + 0x265]
0058C2B3  8B 96 3D 02 00 00         MOV EDX,dword ptr [ESI + 0x23d]
0058C2B9  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0058C2BC  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0058C2BF  03 D8                     ADD EBX,EAX
0058C2C1  03 F9                     ADD EDI,ECX
0058C2C3  8B C3                     MOV EAX,EBX
0058C2C5  89 BE 65 02 00 00         MOV dword ptr [ESI + 0x265],EDI
0058C2CB  8B CF                     MOV ECX,EDI
0058C2CD  66 8B BE 69 02 00 00      MOV DI,word ptr [ESI + 0x269]
0058C2D4  83 C2 FB                  ADD EDX,-0x5
0058C2D7  C1 F8 08                  SAR EAX,0x8
0058C2DA  66 2B F8                  SUB DI,AX
0058C2DD  8B C2                     MOV EAX,EDX
0058C2DF  0F AF C0                  IMUL EAX,EAX
0058C2E2  89 96 3D 02 00 00         MOV dword ptr [ESI + 0x23d],EDX
0058C2E8  89 9E 61 02 00 00         MOV dword ptr [ESI + 0x261],EBX
0058C2EE  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
0058C2F1  66 8B 9E 6D 02 00 00      MOV BX,word ptr [ESI + 0x26d]
0058C2F8  C1 F9 08                  SAR ECX,0x8
0058C2FB  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
0058C2FE  66 2B D9                  SUB BX,CX
0058C301  99                        CDQ
0058C302  81 E2 FF 3F 00 00         AND EDX,0x3fff
0058C308  66 89 7E 41               MOV word ptr [ESI + 0x41],DI
0058C30C  03 C2                     ADD EAX,EDX
0058C30E  66 89 5E 43               MOV word ptr [ESI + 0x43],BX
0058C312  C1 F8 0E                  SAR EAX,0xe
0058C315  66 03 86 71 02 00 00      ADD AX,word ptr [ESI + 0x271]
0058C31C  66 3D B0 04               CMP AX,0x4b0
0058C320  66 89 46 45               MOV word ptr [ESI + 0x45],AX
0058C324  7D 5A                     JGE 0x0058c380
0058C326  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0058C32B  33 D2                     XOR EDX,EDX
0058C32D  B9 11 00 00 00            MOV ECX,0x11
0058C332  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
0058C338  F7 F1                     DIV ECX
0058C33A  85 D2                     TEST EDX,EDX
0058C33C  75 42                     JNZ 0x0058c380
0058C33E  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
0058C345  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0058C348  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
0058C34B  0F BF CF                  MOVSX ECX,DI
0058C34E  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
0058C351  3B C8                     CMP ECX,EAX
0058C353  7D 2B                     JGE 0x0058c380
0058C355  66 85 FF                  TEST DI,DI
0058C358  7E 26                     JLE 0x0058c380
0058C35A  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
0058C361  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0058C364  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
0058C367  0F BF CB                  MOVSX ECX,BX
0058C36A  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
0058C36D  3B C8                     CMP ECX,EAX
0058C36F  7D 0F                     JGE 0x0058c380
0058C371  66 85 DB                  TEST BX,BX
0058C374  7E 0A                     JLE 0x0058c380
0058C376  C7 86 31 02 00 00 04 00 00 00  MOV dword ptr [ESI + 0x231],0x4
LAB_0058c380:
0058C380  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0058C383  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
0058C389  52                        PUSH EDX
0058C38A  6A 0E                     PUSH 0xe
LAB_0058c38c:
0058C38C  E8 D3 4C E7 FF            CALL 0x00401064
FUN_0058bd90::cf_common_exit_0058C391:
0058C391  6A 0E                     PUSH 0xe
0058C393  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
0058C399  E8 1E 6D E7 FF            CALL 0x004030bc
0058C39E  8B 06                     MOV EAX,dword ptr [ESI]
0058C3A0  8B CE                     MOV ECX,ESI
0058C3A2  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0058C3A8  5F                        POP EDI
0058C3A9  5B                        POP EBX
LAB_0058c3aa:
0058C3AA  5E                        POP ESI
0058C3AB  8B E5                     MOV ESP,EBP
0058C3AD  5D                        POP EBP
0058C3AE  C3                        RET
