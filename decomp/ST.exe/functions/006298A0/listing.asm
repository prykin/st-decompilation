FUN_006298a0:
006298A0  55                        PUSH EBP
006298A1  8B EC                     MOV EBP,ESP
006298A3  83 EC 5C                  SUB ESP,0x5c
006298A6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006298AB  53                        PUSH EBX
006298AC  56                        PUSH ESI
006298AD  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006298B0  57                        PUSH EDI
006298B1  8D 55 A8                  LEA EDX,[EBP + -0x58]
006298B4  8D 4D A4                  LEA ECX,[EBP + -0x5c]
006298B7  6A 00                     PUSH 0x0
006298B9  52                        PUSH EDX
006298BA  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006298C1  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
006298C4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006298CA  E8 21 3F 10 00            CALL 0x0072d7f0
006298CF  8B F0                     MOV ESI,EAX
006298D1  83 C4 08                  ADD ESP,0x8
006298D4  85 F6                     TEST ESI,ESI
006298D6  0F 85 02 04 00 00         JNZ 0x00629cde
006298DC  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
006298DF  8A 46 14                  MOV AL,byte ptr [ESI + 0x14]
006298E2  3C 04                     CMP AL,0x4
006298E4  A1 44 0C 7D 00            MOV EAX,[0x007d0c44]
006298E9  72 05                     JC 0x006298f0
006298EB  A1 40 0C 7D 00            MOV EAX,[0x007d0c40]
LAB_006298f0:
006298F0  6A 00                     PUSH 0x0
006298F2  6A 00                     PUSH 0x0
006298F4  6A 01                     PUSH 0x1
006298F6  6A 00                     PUSH 0x0
006298F8  6A FF                     PUSH -0x1
006298FA  50                        PUSH EAX
006298FB  A1 64 67 80 00            MOV EAX,[0x00806764]
00629900  6A 1D                     PUSH 0x1d
00629902  50                        PUSH EAX
00629903  E8 E8 01 0E 00            CALL 0x00709af0
00629908  8B F8                     MOV EDI,EAX
0062990A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062990D  83 C4 20                  ADD ESP,0x20
00629910  8B 0F                     MOV ECX,dword ptr [EDI]
00629912  85 C0                     TEST EAX,EAX
00629914  89 8E B6 00 00 00         MOV dword ptr [ESI + 0xb6],ECX
0062991A  0F 84 B3 03 00 00         JZ 0x00629cd3
00629920  8B 86 C6 00 00 00         MOV EAX,dword ptr [ESI + 0xc6]
00629926  8D 9E C6 00 00 00         LEA EBX,[ESI + 0xc6]
0062992C  85 C0                     TEST EAX,EAX
0062992E  6A 00                     PUSH 0x0
00629930  7D 1E                     JGE 0x00629950
00629932  8B 57 0D                  MOV EDX,dword ptr [EDI + 0xd]
00629935  8B 47 09                  MOV EAX,dword ptr [EDI + 0x9]
00629938  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0062993E  6A 45                     PUSH 0x45
00629940  6A 5A                     PUSH 0x5a
00629942  52                        PUSH EDX
00629943  50                        PUSH EAX
00629944  6A 00                     PUSH 0x0
00629946  6A 02                     PUSH 0x2
00629948  53                        PUSH EBX
00629949  E8 12 ED 0B 00            CALL 0x006e8660
0062994E  EB 30                     JMP 0x00629980
LAB_00629950:
00629950  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00629956  6A 00                     PUSH 0x0
00629958  6A 00                     PUSH 0x0
0062995A  50                        PUSH EAX
0062995B  E8 C0 FB 0B 00            CALL 0x006e9520
00629960  8B 4F 0D                  MOV ECX,dword ptr [EDI + 0xd]
00629963  8B 57 09                  MOV EDX,dword ptr [EDI + 0x9]
00629966  8B 03                     MOV EAX,dword ptr [EBX]
00629968  6A 01                     PUSH 0x1
0062996A  6A 45                     PUSH 0x45
0062996C  6A 5A                     PUSH 0x5a
0062996E  51                        PUSH ECX
0062996F  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00629975  52                        PUSH EDX
00629976  6A 00                     PUSH 0x0
00629978  6A 02                     PUSH 0x2
0062997A  50                        PUSH EAX
0062997B  E8 70 01 0C 00            CALL 0x006e9af0
LAB_00629980:
00629980  8B 4F 21                  MOV ECX,dword ptr [EDI + 0x21]
00629983  8B 17                     MOV EDX,dword ptr [EDI]
00629985  8B 03                     MOV EAX,dword ptr [EBX]
00629987  6A 01                     PUSH 0x1
00629989  51                        PUSH ECX
0062998A  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00629990  52                        PUSH EDX
00629991  6A 00                     PUSH 0x0
00629993  50                        PUSH EAX
00629994  E8 47 FF 0B 00            CALL 0x006e98e0
00629999  8B 8E B2 00 00 00         MOV ECX,dword ptr [ESI + 0xb2]
0062999F  8B 13                     MOV EDX,dword ptr [EBX]
006299A1  51                        PUSH ECX
006299A2  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006299A8  6A 00                     PUSH 0x0
006299AA  52                        PUSH EDX
006299AB  E8 C0 08 0C 00            CALL 0x006ea270
006299B0  DB 46 46                  FILD dword ptr [ESI + 0x46]
006299B3  8B 13                     MOV EDX,dword ptr [EBX]
006299B5  51                        PUSH ECX
006299B6  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006299BC  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006299C2  D9 55 E8                  FST float ptr [EBP + -0x18]
006299C5  D9 5E 6A                  FSTP float ptr [ESI + 0x6a]
006299C8  DB 46 4A                  FILD dword ptr [ESI + 0x4a]
006299CB  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006299CE  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006299D4  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006299DA  D9 55 F8                  FST float ptr [EBP + -0x8]
006299DD  D9 5E 6E                  FSTP float ptr [ESI + 0x6e]
006299E0  DB 46 4E                  FILD dword ptr [ESI + 0x4e]
006299E3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006299E6  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006299EC  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006299F2  D9 56 72                  FST float ptr [ESI + 0x72]
006299F5  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
006299FB  D9 1C 24                  FSTP float ptr [ESP]
006299FE  50                        PUSH EAX
006299FF  51                        PUSH ECX
00629A00  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00629A06  52                        PUSH EDX
00629A07  E8 54 0F 0C 00            CALL 0x006ea960
00629A0C  8B 03                     MOV EAX,dword ptr [EBX]
00629A0E  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00629A14  6A 00                     PUSH 0x0
00629A16  50                        PUSH EAX
00629A17  E8 84 10 0C 00            CALL 0x006eaaa0
00629A1C  C6 86 C1 00 00 00 01      MOV byte ptr [ESI + 0xc1],0x1
00629A23  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
00629A29  85 FF                     TEST EDI,EDI
00629A2B  0F 84 76 01 00 00         JZ 0x00629ba7
00629A31  8B 4E 4E                  MOV ECX,dword ptr [ESI + 0x4e]
00629A34  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00629A39  85 C9                     TEST ECX,ECX
00629A3B  7C 14                     JL 0x00629a51
00629A3D  F7 E9                     IMUL ECX
00629A3F  C1 FA 06                  SAR EDX,0x6
00629A42  8B CA                     MOV ECX,EDX
00629A44  C1 E9 1F                  SHR ECX,0x1f
00629A47  03 D1                     ADD EDX,ECX
00629A49  0F BF D2                  MOVSX EDX,DX
00629A4C  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00629A4F  EB 13                     JMP 0x00629a64
LAB_00629a51:
00629A51  F7 E9                     IMUL ECX
00629A53  C1 FA 06                  SAR EDX,0x6
00629A56  8B C2                     MOV EAX,EDX
00629A58  C1 E8 1F                  SHR EAX,0x1f
00629A5B  03 D0                     ADD EDX,EAX
00629A5D  0F BF C2                  MOVSX EAX,DX
00629A60  48                        DEC EAX
00629A61  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00629a64:
00629A64  8B 4E 4A                  MOV ECX,dword ptr [ESI + 0x4a]
00629A67  B8 79 19 8C 02            MOV EAX,0x28c1979
00629A6C  85 C9                     TEST ECX,ECX
00629A6E  7C 10                     JL 0x00629a80
00629A70  F7 E9                     IMUL ECX
00629A72  D1 FA                     SAR EDX,0x1
00629A74  8B CA                     MOV ECX,EDX
00629A76  C1 E9 1F                  SHR ECX,0x1f
00629A79  03 D1                     ADD EDX,ECX
00629A7B  0F BF CA                  MOVSX ECX,DX
00629A7E  EB 0F                     JMP 0x00629a8f
LAB_00629a80:
00629A80  F7 E9                     IMUL ECX
00629A82  D1 FA                     SAR EDX,0x1
00629A84  8B C2                     MOV EAX,EDX
00629A86  C1 E8 1F                  SHR EAX,0x1f
00629A89  03 D0                     ADD EDX,EAX
00629A8B  0F BF CA                  MOVSX ECX,DX
00629A8E  49                        DEC ECX
LAB_00629a8f:
00629A8F  8B 56 46                  MOV EDX,dword ptr [ESI + 0x46]
00629A92  B8 79 19 8C 02            MOV EAX,0x28c1979
00629A97  85 D2                     TEST EDX,EDX
00629A99  7C 10                     JL 0x00629aab
00629A9B  F7 EA                     IMUL EDX
00629A9D  D1 FA                     SAR EDX,0x1
00629A9F  8B C2                     MOV EAX,EDX
00629AA1  C1 E8 1F                  SHR EAX,0x1f
00629AA4  03 D0                     ADD EDX,EAX
00629AA6  0F BF C2                  MOVSX EAX,DX
00629AA9  EB 0F                     JMP 0x00629aba
LAB_00629aab:
00629AAB  F7 EA                     IMUL EDX
00629AAD  D1 FA                     SAR EDX,0x1
00629AAF  8B C2                     MOV EAX,EDX
00629AB1  C1 E8 1F                  SHR EAX,0x1f
00629AB4  03 D0                     ADD EDX,EAX
00629AB6  0F BF C2                  MOVSX EAX,DX
00629AB9  48                        DEC EAX
LAB_00629aba:
00629ABA  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
00629AC1  0F 84 9A 00 00 00         JZ 0x00629b61
00629AC7  8B 97 F8 00 00 00         MOV EDX,dword ptr [EDI + 0xf8]
00629ACD  85 D2                     TEST EDX,EDX
00629ACF  0F 84 8C 00 00 00         JZ 0x00629b61
00629AD5  8D 55 F4                  LEA EDX,[EBP + -0xc]
00629AD8  52                        PUSH EDX
00629AD9  8D 55 F0                  LEA EDX,[EBP + -0x10]
00629ADC  52                        PUSH EDX
00629ADD  51                        PUSH ECX
00629ADE  50                        PUSH EAX
00629ADF  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
00629AE5  50                        PUSH EAX
00629AE6  8B CF                     MOV ECX,EDI
00629AE8  E8 66 A4 DD FF            CALL 0x00403f53
00629AED  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00629AF0  85 C9                     TEST ECX,ECX
00629AF2  7C 6D                     JL 0x00629b61
00629AF4  83 F9 05                  CMP ECX,0x5
00629AF7  7D 68                     JGE 0x00629b61
00629AF9  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00629AFC  85 C0                     TEST EAX,EAX
00629AFE  7C 21                     JL 0x00629b21
00629B00  3B 47 30                  CMP EAX,dword ptr [EDI + 0x30]
00629B03  7D 1C                     JGE 0x00629b21
00629B05  8B 14 8D D0 AE 79 00      MOV EDX,dword ptr [ECX*0x4 + 0x79aed0]
00629B0C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00629B0F  03 C2                     ADD EAX,EDX
00629B11  85 C0                     TEST EAX,EAX
00629B13  7C 0C                     JL 0x00629b21
00629B15  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
00629B18  7D 07                     JGE 0x00629b21
00629B1A  B8 01 00 00 00            MOV EAX,0x1
00629B1F  EB 02                     JMP 0x00629b23
LAB_00629b21:
00629B21  33 C0                     XOR EAX,EAX
LAB_00629b23:
00629B23  85 C0                     TEST EAX,EAX
00629B25  74 2C                     JZ 0x00629b53
00629B27  8B 47 4C                  MOV EAX,dword ptr [EDI + 0x4c]
00629B2A  85 C0                     TEST EAX,EAX
00629B2C  74 25                     JZ 0x00629b53
00629B2E  8B 0C 8D D0 AE 79 00      MOV ECX,dword ptr [ECX*0x4 + 0x79aed0]
00629B35  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00629B38  03 CA                     ADD ECX,EDX
00629B3A  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00629B3D  0F AF 4F 30               IMUL ECX,dword ptr [EDI + 0x30]
00629B41  03 C8                     ADD ECX,EAX
00629B43  33 C0                     XOR EAX,EAX
00629B45  8A 04 11                  MOV AL,byte ptr [ECX + EDX*0x1]
00629B48  33 C9                     XOR ECX,ECX
00629B4A  85 C0                     TEST EAX,EAX
00629B4C  0F 95 C1                  SETNZ CL
00629B4F  8B C1                     MOV EAX,ECX
00629B51  EB 13                     JMP 0x00629b66
LAB_00629b53:
00629B53  83 C8 FF                  OR EAX,0xffffffff
00629B56  33 C9                     XOR ECX,ECX
00629B58  85 C0                     TEST EAX,EAX
00629B5A  0F 95 C1                  SETNZ CL
00629B5D  8B C1                     MOV EAX,ECX
00629B5F  EB 05                     JMP 0x00629b66
LAB_00629b61:
00629B61  B8 01 00 00 00            MOV EAX,0x1
LAB_00629b66:
00629B66  83 F8 01                  CMP EAX,0x1
00629B69  8A 86 C1 00 00 00         MOV AL,byte ptr [ESI + 0xc1]
00629B6F  75 1D                     JNZ 0x00629b8e
00629B71  84 C0                     TEST AL,AL
00629B73  75 32                     JNZ 0x00629ba7
00629B75  8B 13                     MOV EDX,dword ptr [EBX]
00629B77  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00629B7D  6A 00                     PUSH 0x0
00629B7F  52                        PUSH EDX
00629B80  E8 1B 0F 0C 00            CALL 0x006eaaa0
00629B85  C6 86 C1 00 00 00 01      MOV byte ptr [ESI + 0xc1],0x1
00629B8C  EB 19                     JMP 0x00629ba7
LAB_00629b8e:
00629B8E  3C 01                     CMP AL,0x1
00629B90  75 15                     JNZ 0x00629ba7
00629B92  8B 03                     MOV EAX,dword ptr [EBX]
00629B94  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00629B9A  50                        PUSH EAX
00629B9B  E8 C0 0F 0C 00            CALL 0x006eab60
00629BA0  C6 86 C1 00 00 00 00      MOV byte ptr [ESI + 0xc1],0x0
LAB_00629ba7:
00629BA7  8A 46 14                  MOV AL,byte ptr [ESI + 0x14]
00629BAA  6A 00                     PUSH 0x0
00629BAC  6A 00                     PUSH 0x0
00629BAE  6A 01                     PUSH 0x1
00629BB0  3C 04                     CMP AL,0x4
00629BB2  6A 00                     PUSH 0x0
00629BB4  6A FF                     PUSH -0x1
00629BB6  73 5B                     JNC 0x00629c13
00629BB8  8B 0D 64 67 80 00         MOV ECX,dword ptr [0x00806764]
00629BBE  68 48 0C 7D 00            PUSH 0x7d0c48
00629BC3  6A 1D                     PUSH 0x1d
00629BC5  51                        PUSH ECX
00629BC6  E8 25 FF 0D 00            CALL 0x00709af0
00629BCB  8B 8E B2 00 00 00         MOV ECX,dword ptr [ESI + 0xb2]
00629BD1  83 C4 20                  ADD ESP,0x20
00629BD4  83 F9 0F                  CMP ECX,0xf
00629BD7  7C 06                     JL 0x00629bdf
00629BD9  83 C1 03                  ADD ECX,0x3
00629BDC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00629bdf:
00629BDF  8B 50 21                  MOV EDX,dword ptr [EAX + 0x21]
00629BE2  8B 00                     MOV EAX,dword ptr [EAX]
00629BE4  8B 0B                     MOV ECX,dword ptr [EBX]
00629BE6  6A 01                     PUSH 0x1
00629BE8  52                        PUSH EDX
00629BE9  50                        PUSH EAX
00629BEA  6A 01                     PUSH 0x1
00629BEC  51                        PUSH ECX
00629BED  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00629BF3  E8 E8 FC 0B 00            CALL 0x006e98e0
00629BF8  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00629BFB  8B 03                     MOV EAX,dword ptr [EBX]
00629BFD  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00629C03  52                        PUSH EDX
00629C04  6A 01                     PUSH 0x1
00629C06  50                        PUSH EAX
00629C07  E8 64 06 0C 00            CALL 0x006ea270
00629C0C  8B 0B                     MOV ECX,dword ptr [EBX]
00629C0E  6A 01                     PUSH 0x1
00629C10  51                        PUSH ECX
00629C11  EB 59                     JMP 0x00629c6c
LAB_00629c13:
00629C13  8B 15 64 67 80 00         MOV EDX,dword ptr [0x00806764]
00629C19  68 50 0C 7D 00            PUSH 0x7d0c50
00629C1E  6A 1D                     PUSH 0x1d
00629C20  52                        PUSH EDX
00629C21  E8 CA FE 0D 00            CALL 0x00709af0
00629C26  8B 8E B2 00 00 00         MOV ECX,dword ptr [ESI + 0xb2]
00629C2C  83 C4 20                  ADD ESP,0x20
00629C2F  83 F9 0F                  CMP ECX,0xf
00629C32  7C 06                     JL 0x00629c3a
00629C34  83 C1 F1                  ADD ECX,-0xf
00629C37  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00629c3a:
00629C3A  8B 48 21                  MOV ECX,dword ptr [EAX + 0x21]
00629C3D  8B 10                     MOV EDX,dword ptr [EAX]
00629C3F  8B 03                     MOV EAX,dword ptr [EBX]
00629C41  6A 01                     PUSH 0x1
00629C43  51                        PUSH ECX
00629C44  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00629C4A  52                        PUSH EDX
00629C4B  6A 01                     PUSH 0x1
00629C4D  50                        PUSH EAX
00629C4E  E8 8D FC 0B 00            CALL 0x006e98e0
00629C53  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00629C56  8B 13                     MOV EDX,dword ptr [EBX]
00629C58  51                        PUSH ECX
00629C59  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00629C5F  6A 01                     PUSH 0x1
00629C61  52                        PUSH EDX
00629C62  E8 09 06 0C 00            CALL 0x006ea270
00629C67  8B 03                     MOV EAX,dword ptr [EBX]
00629C69  6A 01                     PUSH 0x1
00629C6B  50                        PUSH EAX
LAB_00629c6c:
00629C6C  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00629C72  E8 C9 00 0C 00            CALL 0x006e9d40
00629C77  8B 86 EB 00 00 00         MOV EAX,dword ptr [ESI + 0xeb]
00629C7D  85 C0                     TEST EAX,EAX
00629C7F  74 36                     JZ 0x00629cb7
00629C81  8B 8E F3 00 00 00         MOV ECX,dword ptr [ESI + 0xf3]
00629C87  85 C9                     TEST ECX,ECX
00629C89  75 17                     JNZ 0x00629ca2
00629C8B  8B 88 ED 01 00 00         MOV ECX,dword ptr [EAX + 0x1ed]
00629C91  8B 13                     MOV EDX,dword ptr [EBX]
00629C93  51                        PUSH ECX
00629C94  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00629C9A  52                        PUSH EDX
00629C9B  E8 C0 07 0C 00            CALL 0x006ea460
00629CA0  EB 15                     JMP 0x00629cb7
LAB_00629ca2:
00629CA2  8B 80 ED 01 00 00         MOV EAX,dword ptr [EAX + 0x1ed]
00629CA8  8B 0B                     MOV ECX,dword ptr [EBX]
00629CAA  50                        PUSH EAX
00629CAB  51                        PUSH ECX
00629CAC  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00629CB2  E8 29 07 0C 00            CALL 0x006ea3e0
LAB_00629cb7:
00629CB7  8B 13                     MOV EDX,dword ptr [EBX]
00629CB9  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00629CBF  6A 53                     PUSH 0x53
00629CC1  6A 5A                     PUSH 0x5a
00629CC3  6A 01                     PUSH 0x1
00629CC5  52                        PUSH EDX
00629CC6  E8 15 08 0C 00            CALL 0x006ea4e0
00629CCB  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
00629CCE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
LAB_00629cd3:
00629CD3  33 C0                     XOR EAX,EAX
00629CD5  5F                        POP EDI
00629CD6  5E                        POP ESI
00629CD7  5B                        POP EBX
00629CD8  8B E5                     MOV ESP,EBP
00629CDA  5D                        POP EBP
00629CDB  C2 04 00                  RET 0x4
LAB_00629cde:
00629CDE  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
00629CE1  68 BC 13 7D 00            PUSH 0x7d13bc
00629CE6  68 CC 4C 7A 00            PUSH 0x7a4ccc
00629CEB  56                        PUSH ESI
00629CEC  6A 00                     PUSH 0x0
00629CEE  68 20 03 00 00            PUSH 0x320
00629CF3  68 54 13 7D 00            PUSH 0x7d1354
00629CF8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00629CFE  E8 CD 37 08 00            CALL 0x006ad4d0
00629D03  83 C4 18                  ADD ESP,0x18
00629D06  85 C0                     TEST EAX,EAX
00629D08  74 01                     JZ 0x00629d0b
00629D0A  CC                        INT3
LAB_00629d0b:
00629D0B  68 22 03 00 00            PUSH 0x322
00629D10  68 54 13 7D 00            PUSH 0x7d1354
00629D15  6A 00                     PUSH 0x0
00629D17  56                        PUSH ESI
00629D18  E8 23 C1 07 00            CALL 0x006a5e40
00629D1D  5F                        POP EDI
00629D1E  5E                        POP ESI
00629D1F  B8 FF FF 00 00            MOV EAX,0xffff
00629D24  5B                        POP EBX
00629D25  8B E5                     MOV ESP,EBP
00629D27  5D                        POP EBP
00629D28  C2 04 00                  RET 0x4
