FUN_005bf860:
005BF860  55                        PUSH EBP
005BF861  8B EC                     MOV EBP,ESP
005BF863  83 EC 4C                  SUB ESP,0x4c
005BF866  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005BF86B  53                        PUSH EBX
005BF86C  56                        PUSH ESI
005BF86D  57                        PUSH EDI
005BF86E  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005BF871  33 FF                     XOR EDI,EDI
005BF873  8D 55 B8                  LEA EDX,[EBP + -0x48]
005BF876  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005BF879  57                        PUSH EDI
005BF87A  52                        PUSH EDX
005BF87B  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
005BF882  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005BF885  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005BF88B  E8 60 DF 16 00            CALL 0x0072d7f0
005BF890  8B F0                     MOV ESI,EAX
005BF892  83 C4 08                  ADD ESP,0x8
005BF895  3B F7                     CMP ESI,EDI
005BF897  0F 85 4C 03 00 00         JNZ 0x005bfbe9
005BF89D  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005BF8A0  33 C0                     XOR EAX,EAX
005BF8A2  8A 46 65                  MOV AL,byte ptr [ESI + 0x65]
005BF8A5  48                        DEC EAX
005BF8A6  0F 84 2F 01 00 00         JZ 0x005bf9db
005BF8AC  83 E8 02                  SUB EAX,0x2
005BF8AF  0F 84 8E 00 00 00         JZ 0x005bf943
005BF8B5  48                        DEC EAX
005BF8B6  0F 85 1D 03 00 00         JNZ 0x005bfbd9
005BF8BC  8B 8E 53 04 00 00         MOV ECX,dword ptr [ESI + 0x453]
005BF8C2  3B CF                     CMP ECX,EDI
005BF8C4  74 27                     JZ 0x005bf8ed
005BF8C6  E8 26 5D E4 FF            CALL 0x004055f1
005BF8CB  85 C0                     TEST EAX,EAX
005BF8CD  74 05                     JZ 0x005bf8d4
005BF8CF  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
005BF8D2  EB 19                     JMP 0x005bf8ed
LAB_005bf8d4:
005BF8D4  8B 86 53 04 00 00         MOV EAX,dword ptr [ESI + 0x453]
005BF8DA  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005BF8DD  3B C7                     CMP EAX,EDI
005BF8DF  7C 0C                     JL 0x005bf8ed
005BF8E1  50                        PUSH EAX
005BF8E2  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005BF8E7  50                        PUSH EAX
005BF8E8  E8 03 42 0F 00            CALL 0x006b3af0
LAB_005bf8ed:
005BF8ED  8B 8E 57 04 00 00         MOV ECX,dword ptr [ESI + 0x457]
005BF8F3  3B CF                     CMP ECX,EDI
005BF8F5  74 28                     JZ 0x005bf91f
005BF8F7  E8 F5 5C E4 FF            CALL 0x004055f1
005BF8FC  85 C0                     TEST EAX,EAX
005BF8FE  74 05                     JZ 0x005bf905
005BF900  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
005BF903  EB 1A                     JMP 0x005bf91f
LAB_005bf905:
005BF905  8B 86 57 04 00 00         MOV EAX,dword ptr [ESI + 0x457]
005BF90B  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005BF90E  3B C7                     CMP EAX,EDI
005BF910  7C 0D                     JL 0x005bf91f
005BF912  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005BF918  50                        PUSH EAX
005BF919  51                        PUSH ECX
005BF91A  E8 D1 41 0F 00            CALL 0x006b3af0
LAB_005bf91f:
005BF91F  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
005BF922  0F 84 B1 02 00 00         JZ 0x005bfbd9
005BF928  8B CE                     MOV ECX,ESI
005BF92A  C6 46 65 02               MOV byte ptr [ESI + 0x65],0x2
005BF92E  E8 85 54 E4 FF            CALL 0x00404db8
005BF933  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005BF936  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005BF93C  5F                        POP EDI
005BF93D  5E                        POP ESI
005BF93E  5B                        POP EBX
005BF93F  8B E5                     MOV ESP,EBP
005BF941  5D                        POP EBP
005BF942  C3                        RET
LAB_005bf943:
005BF943  8B 8E 53 04 00 00         MOV ECX,dword ptr [ESI + 0x453]
005BF949  3B CF                     CMP ECX,EDI
005BF94B  74 0C                     JZ 0x005bf959
005BF94D  E8 9F 5C E4 FF            CALL 0x004055f1
005BF952  85 C0                     TEST EAX,EAX
005BF954  74 03                     JZ 0x005bf959
005BF956  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_005bf959:
005BF959  8B 8E 57 04 00 00         MOV ECX,dword ptr [ESI + 0x457]
005BF95F  3B CF                     CMP ECX,EDI
005BF961  74 0C                     JZ 0x005bf96f
005BF963  E8 89 5C E4 FF            CALL 0x004055f1
005BF968  85 C0                     TEST EAX,EAX
005BF96A  74 03                     JZ 0x005bf96f
005BF96C  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_005bf96f:
005BF96F  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
005BF972  0F 84 61 02 00 00         JZ 0x005bfbd9
005BF978  8B 8E 53 04 00 00         MOV ECX,dword ptr [ESI + 0x453]
005BF97E  3B CF                     CMP ECX,EDI
005BF980  74 1A                     JZ 0x005bf99c
005BF982  E8 03 19 E4 FF            CALL 0x0040128a
005BF987  8B 96 53 04 00 00         MOV EDX,dword ptr [ESI + 0x453]
005BF98D  52                        PUSH EDX
005BF98E  E8 1D E9 16 00            CALL 0x0072e2b0
005BF993  83 C4 04                  ADD ESP,0x4
005BF996  89 BE 53 04 00 00         MOV dword ptr [ESI + 0x453],EDI
LAB_005bf99c:
005BF99C  8B 8E 57 04 00 00         MOV ECX,dword ptr [ESI + 0x457]
005BF9A2  3B CF                     CMP ECX,EDI
005BF9A4  74 1A                     JZ 0x005bf9c0
005BF9A6  E8 DF 18 E4 FF            CALL 0x0040128a
005BF9AB  8B 86 57 04 00 00         MOV EAX,dword ptr [ESI + 0x457]
005BF9B1  50                        PUSH EAX
005BF9B2  E8 F9 E8 16 00            CALL 0x0072e2b0
005BF9B7  83 C4 04                  ADD ESP,0x4
005BF9BA  89 BE 57 04 00 00         MOV dword ptr [ESI + 0x457],EDI
LAB_005bf9c0:
005BF9C0  8B CE                     MOV ECX,ESI
005BF9C2  C6 46 65 01               MOV byte ptr [ESI + 0x65],0x1
005BF9C6  E8 A1 40 E4 FF            CALL 0x00403a6c
005BF9CB  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005BF9CE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005BF9D4  5F                        POP EDI
005BF9D5  5E                        POP ESI
005BF9D6  5B                        POP EBX
005BF9D7  8B E5                     MOV ESP,EBP
005BF9D9  5D                        POP EBP
005BF9DA  C3                        RET
LAB_005bf9db:
005BF9DB  8A 46 67                  MOV AL,byte ptr [ESI + 0x67]
005BF9DE  84 C0                     TEST AL,AL
005BF9E0  0F 84 F3 01 00 00         JZ 0x005bfbd9
005BF9E6  8A 46 69                  MOV AL,byte ptr [ESI + 0x69]
005BF9E9  84 C0                     TEST AL,AL
005BF9EB  0F 85 E8 01 00 00         JNZ 0x005bfbd9
005BF9F1  8A 46 68                  MOV AL,byte ptr [ESI + 0x68]
005BF9F4  84 C0                     TEST AL,AL
005BF9F6  0F 84 DD 01 00 00         JZ 0x005bfbd9
005BF9FC  8B 0D 34 67 80 00         MOV ECX,dword ptr [0x00806734]
005BFA02  8B 15 30 67 80 00         MOV EDX,dword ptr [0x00806730]
005BFA08  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005BFA0D  51                        PUSH ECX
005BFA0E  52                        PUSH EDX
005BFA0F  57                        PUSH EDI
005BFA10  57                        PUSH EDI
005BFA11  50                        PUSH EAX
005BFA12  33 DB                     XOR EBX,EBX
005BFA14  E8 67 65 0F 00            CALL 0x006b5f80
005BFA19  33 C9                     XOR ECX,ECX
005BFA1B  8A 0D 3E C8 80 00         MOV CL,byte ptr [0x0080c83e]
005BFA21  41                        INC ECX
005BFA22  85 C9                     TEST ECX,ECX
005BFA24  0F 8E 16 01 00 00         JLE 0x005bfb40
LAB_005bfa2a:
005BFA2A  85 FF                     TEST EDI,EDI
005BFA2C  0F 84 84 00 00 00         JZ 0x005bfab6
005BFA32  8B 04 BD 43 C9 80 00      MOV EAX,dword ptr [EDI*0x4 + 0x80c943]
005BFA39  8B 8C BE A3 02 00 00      MOV ECX,dword ptr [ESI + EDI*0x4 + 0x2a3]
005BFA40  3B C8                     CMP ECX,EAX
005BFA42  7D 68                     JGE 0x005bfaac
005BFA44  8B 8E A3 02 00 00         MOV ECX,dword ptr [ESI + 0x2a3]
005BFA4A  83 F9 28                  CMP ECX,0x28
005BFA4D  7E 13                     JLE 0x005bfa62
005BFA4F  B8 67 66 66 66            MOV EAX,0x66666667
005BFA54  F7 E9                     IMUL ECX
005BFA56  C1 FA 04                  SAR EDX,0x4
005BFA59  8B C2                     MOV EAX,EDX
005BFA5B  C1 E8 1F                  SHR EAX,0x1f
005BFA5E  03 D0                     ADD EDX,EAX
005BFA60  EB 05                     JMP 0x005bfa67
LAB_005bfa62:
005BFA62  BA 05 00 00 00            MOV EDX,0x5
LAB_005bfa67:
005BFA67  8B 9C BE A3 02 00 00      MOV EBX,dword ptr [ESI + EDI*0x4 + 0x2a3]
005BFA6E  03 DA                     ADD EBX,EDX
005BFA70  89 9C BE A3 02 00 00      MOV dword ptr [ESI + EDI*0x4 + 0x2a3],EBX
005BFA77  8B 04 BD 43 C9 80 00      MOV EAX,dword ptr [EDI*0x4 + 0x80c943]
005BFA7E  8B CB                     MOV ECX,EBX
005BFA80  3B C8                     CMP ECX,EAX
005BFA82  7E 07                     JLE 0x005bfa8b
005BFA84  89 84 BE A3 02 00 00      MOV dword ptr [ESI + EDI*0x4 + 0x2a3],EAX
LAB_005bfa8b:
005BFA8B  8B 8E A3 02 00 00         MOV ECX,dword ptr [ESI + 0x2a3]
005BFA91  8B 94 BE A3 02 00 00      MOV EDX,dword ptr [ESI + EDI*0x4 + 0x2a3]
005BFA98  57                        PUSH EDI
005BFA99  51                        PUSH ECX
005BFA9A  52                        PUSH EDX
005BFA9B  8B CE                     MOV ECX,ESI
005BFA9D  E8 5C 1C E4 FF            CALL 0x004016fe
005BFAA2  BB 01 00 00 00            MOV EBX,0x1
005BFAA7  E9 83 00 00 00            JMP 0x005bfb2f
LAB_005bfaac:
005BFAAC  8B 8E A3 02 00 00         MOV ECX,dword ptr [ESI + 0x2a3]
005BFAB2  57                        PUSH EDI
005BFAB3  51                        PUSH ECX
005BFAB4  EB 71                     JMP 0x005bfb27
LAB_005bfab6:
005BFAB6  A1 63 C9 80 00            MOV EAX,[0x0080c963]
005BFABB  8B 8E C3 02 00 00         MOV ECX,dword ptr [ESI + 0x2c3]
005BFAC1  3B C8                     CMP ECX,EAX
005BFAC3  7D 59                     JGE 0x005bfb1e
005BFAC5  8B 8E A3 02 00 00         MOV ECX,dword ptr [ESI + 0x2a3]
005BFACB  83 F9 28                  CMP ECX,0x28
005BFACE  7E 13                     JLE 0x005bfae3
005BFAD0  B8 67 66 66 66            MOV EAX,0x66666667
005BFAD5  F7 E9                     IMUL ECX
005BFAD7  C1 FA 04                  SAR EDX,0x4
005BFADA  8B C2                     MOV EAX,EDX
005BFADC  C1 E8 1F                  SHR EAX,0x1f
005BFADF  03 D0                     ADD EDX,EAX
005BFAE1  EB 05                     JMP 0x005bfae8
LAB_005bfae3:
005BFAE3  BA 05 00 00 00            MOV EDX,0x5
LAB_005bfae8:
005BFAE8  8B 86 C3 02 00 00         MOV EAX,dword ptr [ESI + 0x2c3]
005BFAEE  03 C2                     ADD EAX,EDX
005BFAF0  89 86 C3 02 00 00         MOV dword ptr [ESI + 0x2c3],EAX
005BFAF6  8B 15 63 C9 80 00         MOV EDX,dword ptr [0x0080c963]
005BFAFC  3B C2                     CMP EAX,EDX
005BFAFE  7E 06                     JLE 0x005bfb06
005BFB00  89 96 C3 02 00 00         MOV dword ptr [ESI + 0x2c3],EDX
LAB_005bfb06:
005BFB06  6A 00                     PUSH 0x0
005BFB08  51                        PUSH ECX
005BFB09  8B 8E C3 02 00 00         MOV ECX,dword ptr [ESI + 0x2c3]
005BFB0F  51                        PUSH ECX
005BFB10  8B CE                     MOV ECX,ESI
005BFB12  E8 E7 1B E4 FF            CALL 0x004016fe
005BFB17  BB 01 00 00 00            MOV EBX,0x1
005BFB1C  EB 11                     JMP 0x005bfb2f
LAB_005bfb1e:
005BFB1E  8B 96 A3 02 00 00         MOV EDX,dword ptr [ESI + 0x2a3]
005BFB24  6A 00                     PUSH 0x0
005BFB26  52                        PUSH EDX
LAB_005bfb27:
005BFB27  50                        PUSH EAX
005BFB28  8B CE                     MOV ECX,ESI
005BFB2A  E8 CF 1B E4 FF            CALL 0x004016fe
LAB_005bfb2f:
005BFB2F  33 C0                     XOR EAX,EAX
005BFB31  47                        INC EDI
005BFB32  A0 3E C8 80 00            MOV AL,[0x0080c83e]
005BFB37  40                        INC EAX
005BFB38  3B F8                     CMP EDI,EAX
005BFB3A  0F 8C EA FE FF FF         JL 0x005bfa2a
LAB_005bfb40:
005BFB40  85 DB                     TEST EBX,EBX
005BFB42  0F 84 8D 00 00 00         JZ 0x005bfbd5
005BFB48  6A FF                     PUSH -0x1
005BFB4A  6A 01                     PUSH 0x1
005BFB4C  6A 1E                     PUSH 0x1e
005BFB4E  8B CE                     MOV ECX,ESI
005BFB50  E8 9C 50 E4 FF            CALL 0x00404bf1
005BFB55  8B 0D 34 67 80 00         MOV ECX,dword ptr [0x00806734]
005BFB5B  8B 15 30 67 80 00         MOV EDX,dword ptr [0x00806730]
005BFB61  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005BFB66  51                        PUSH ECX
005BFB67  52                        PUSH EDX
005BFB68  6A 00                     PUSH 0x0
005BFB6A  6A 00                     PUSH 0x0
005BFB6C  50                        PUSH EAX
005BFB6D  E8 0E 64 0F 00            CALL 0x006b5f80
005BFB72  8B 46 73                  MOV EAX,dword ptr [ESI + 0x73]
005BFB75  8B 4E 5D                  MOV ECX,dword ptr [ESI + 0x5d]
005BFB78  51                        PUSH ECX
005BFB79  6A 01                     PUSH 0x1
005BFB7B  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
005BFB7E  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
005BFB81  52                        PUSH EDX
005BFB82  50                        PUSH EAX
005BFB83  6A 46                     PUSH 0x46
005BFB85  6A 1A                     PUSH 0x1a
005BFB87  6A 46                     PUSH 0x46
005BFB89  6A 1A                     PUSH 0x1a
005BFB8B  E8 08 27 E4 FF            CALL 0x00402298
005BFB90  8B 46 73                  MOV EAX,dword ptr [ESI + 0x73]
005BFB93  83 C4 20                  ADD ESP,0x20
005BFB96  81 C6 A3 00 00 00         ADD ESI,0xa3
005BFB9C  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005BFB9F  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005BFBA2  68 FF 00 00 01            PUSH 0x10000ff
005BFBA7  68 4C 00 00 01            PUSH 0x100004c
005BFBAC  56                        PUSH ESI
005BFBAD  51                        PUSH ECX
005BFBAE  52                        PUSH EDX
005BFBAF  6A 00                     PUSH 0x0
005BFBB1  6A 00                     PUSH 0x0
005BFBB3  6A 00                     PUSH 0x0
005BFBB5  50                        PUSH EAX
005BFBB6  A1 9C 75 80 00            MOV EAX,[0x0080759c]
005BFBBB  6A 46                     PUSH 0x46
005BFBBD  6A 1A                     PUSH 0x1a
005BFBBF  50                        PUSH EAX
005BFBC0  E8 1B 4D 0F 00            CALL 0x006b48e0
005BFBC5  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005BFBC8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005BFBCE  5F                        POP EDI
005BFBCF  5E                        POP ESI
005BFBD0  5B                        POP EBX
005BFBD1  8B E5                     MOV ESP,EBP
005BFBD3  5D                        POP EBP
005BFBD4  C3                        RET
LAB_005bfbd5:
005BFBD5  C6 46 68 00               MOV byte ptr [ESI + 0x68],0x0
LAB_005bfbd9:
005BFBD9  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005BFBDC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005BFBE2  5F                        POP EDI
005BFBE3  5E                        POP ESI
005BFBE4  5B                        POP EBX
005BFBE5  8B E5                     MOV ESP,EBP
005BFBE7  5D                        POP EBP
005BFBE8  C3                        RET
LAB_005bfbe9:
005BFBE9  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005BFBEC  68 C8 CF 7C 00            PUSH 0x7ccfc8
005BFBF1  68 CC 4C 7A 00            PUSH 0x7a4ccc
005BFBF6  56                        PUSH ESI
005BFBF7  57                        PUSH EDI
005BFBF8  68 F9 01 00 00            PUSH 0x1f9
005BFBFD  68 C8 CE 7C 00            PUSH 0x7ccec8
005BFC02  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005BFC08  E8 C3 D8 0E 00            CALL 0x006ad4d0
005BFC0D  83 C4 18                  ADD ESP,0x18
005BFC10  85 C0                     TEST EAX,EAX
005BFC12  74 01                     JZ 0x005bfc15
005BFC14  CC                        INT3
LAB_005bfc15:
005BFC15  68 F9 01 00 00            PUSH 0x1f9
005BFC1A  68 C8 CE 7C 00            PUSH 0x7ccec8
005BFC1F  57                        PUSH EDI
005BFC20  56                        PUSH ESI
005BFC21  E8 1A 62 0E 00            CALL 0x006a5e40
005BFC26  5F                        POP EDI
005BFC27  5E                        POP ESI
005BFC28  5B                        POP EBX
005BFC29  8B E5                     MOV ESP,EBP
005BFC2B  5D                        POP EBP
005BFC2C  C3                        RET
