FUN_005f3940:
005F3940  55                        PUSH EBP
005F3941  8B EC                     MOV EBP,ESP
005F3943  51                        PUSH ECX
005F3944  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005F3947  53                        PUSH EBX
005F3948  56                        PUSH ESI
005F3949  57                        PUSH EDI
005F394A  85 C9                     TEST ECX,ECX
005F394C  B8 79 19 8C 02            MOV EAX,0x28c1979
005F3951  7C 10                     JL 0x005f3963
005F3953  F7 E9                     IMUL ECX
005F3955  D1 FA                     SAR EDX,0x1
005F3957  8B C2                     MOV EAX,EDX
005F3959  C1 E8 1F                  SHR EAX,0x1f
005F395C  03 D0                     ADD EDX,EAX
005F395E  0F BF DA                  MOVSX EBX,DX
005F3961  EB 0F                     JMP 0x005f3972
LAB_005f3963:
005F3963  F7 E9                     IMUL ECX
005F3965  D1 FA                     SAR EDX,0x1
005F3967  8B CA                     MOV ECX,EDX
005F3969  C1 E9 1F                  SHR ECX,0x1f
005F396C  03 D1                     ADD EDX,ECX
005F396E  0F BF DA                  MOVSX EBX,DX
005F3971  4B                        DEC EBX
LAB_005f3972:
005F3972  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005F3975  B8 79 19 8C 02            MOV EAX,0x28c1979
005F397A  85 C9                     TEST ECX,ECX
005F397C  7C 10                     JL 0x005f398e
005F397E  F7 E9                     IMUL ECX
005F3980  D1 FA                     SAR EDX,0x1
005F3982  8B C2                     MOV EAX,EDX
005F3984  C1 E8 1F                  SHR EAX,0x1f
005F3987  03 D0                     ADD EDX,EAX
005F3989  0F BF F2                  MOVSX ESI,DX
005F398C  EB 0F                     JMP 0x005f399d
LAB_005f398e:
005F398E  F7 E9                     IMUL ECX
005F3990  D1 FA                     SAR EDX,0x1
005F3992  8B CA                     MOV ECX,EDX
005F3994  C1 E9 1F                  SHR ECX,0x1f
005F3997  03 D1                     ADD EDX,ECX
005F3999  0F BF F2                  MOVSX ESI,DX
005F399C  4E                        DEC ESI
LAB_005f399d:
005F399D  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
005F39A0  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005F39A5  85 C9                     TEST ECX,ECX
005F39A7  7C 14                     JL 0x005f39bd
005F39A9  F7 E9                     IMUL ECX
005F39AB  C1 FA 06                  SAR EDX,0x6
005F39AE  8B C2                     MOV EAX,EDX
005F39B0  C1 E8 1F                  SHR EAX,0x1f
005F39B3  03 D0                     ADD EDX,EAX
005F39B5  0F BF CA                  MOVSX ECX,DX
005F39B8  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
005F39BB  EB 13                     JMP 0x005f39d0
LAB_005f39bd:
005F39BD  F7 E9                     IMUL ECX
005F39BF  C1 FA 06                  SAR EDX,0x6
005F39C2  8B C2                     MOV EAX,EDX
005F39C4  C1 E8 1F                  SHR EAX,0x1f
005F39C7  03 D0                     ADD EDX,EAX
005F39C9  0F BF C2                  MOVSX EAX,DX
005F39CC  48                        DEC EAX
005F39CD  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
LAB_005f39d0:
005F39D0  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F39D6  3B 59 48                  CMP EBX,dword ptr [ECX + 0x48]
005F39D9  0F 8C AA 00 00 00         JL 0x005f3a89
005F39DF  3B 59 58                  CMP EBX,dword ptr [ECX + 0x58]
005F39E2  0F 8F A1 00 00 00         JG 0x005f3a89
005F39E8  3B 71 44                  CMP ESI,dword ptr [ECX + 0x44]
005F39EB  0F 8C 98 00 00 00         JL 0x005f3a89
005F39F1  3B 71 54                  CMP ESI,dword ptr [ECX + 0x54]
005F39F4  0F 8F 8F 00 00 00         JG 0x005f3a89
005F39FA  6A 00                     PUSH 0x0
005F39FC  56                        PUSH ESI
005F39FD  53                        PUSH EBX
005F39FE  E8 CD A1 0E 00            CALL 0x006ddbd0
005F3A03  85 C0                     TEST EAX,EAX
005F3A05  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
005F3A08  0F 84 82 00 00 00         JZ 0x005f3a90
005F3A0E  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
005F3A14  85 FF                     TEST EDI,EDI
005F3A16  74 78                     JZ 0x005f3a90
005F3A18  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
005F3A1F  74 6F                     JZ 0x005f3a90
005F3A21  8B 87 F8 00 00 00         MOV EAX,dword ptr [EDI + 0xf8]
005F3A27  85 C0                     TEST EAX,EAX
005F3A29  74 65                     JZ 0x005f3a90
005F3A2B  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
005F3A31  8D 4D FC                  LEA ECX,[EBP + -0x4]
005F3A34  8D 55 10                  LEA EDX,[EBP + 0x10]
005F3A37  51                        PUSH ECX
005F3A38  52                        PUSH EDX
005F3A39  56                        PUSH ESI
005F3A3A  53                        PUSH EBX
005F3A3B  50                        PUSH EAX
005F3A3C  8B CF                     MOV ECX,EDI
005F3A3E  E8 10 05 E1 FF            CALL 0x00403f53
005F3A43  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005F3A46  85 C0                     TEST EAX,EAX
005F3A48  7C 46                     JL 0x005f3a90
005F3A4A  83 F8 05                  CMP EAX,0x5
005F3A4D  7D 41                     JGE 0x005f3a90
005F3A4F  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005F3A52  85 D2                     TEST EDX,EDX
005F3A54  7C 3A                     JL 0x005f3a90
005F3A56  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
005F3A59  3B D1                     CMP EDX,ECX
005F3A5B  7D 33                     JGE 0x005f3a90
005F3A5D  8B 04 85 D0 AE 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79aed0]
005F3A64  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005F3A67  03 C6                     ADD EAX,ESI
005F3A69  85 C0                     TEST EAX,EAX
005F3A6B  7C 23                     JL 0x005f3a90
005F3A6D  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
005F3A70  7D 1E                     JGE 0x005f3a90
005F3A72  8B 7F 4C                  MOV EDI,dword ptr [EDI + 0x4c]
005F3A75  85 FF                     TEST EDI,EDI
005F3A77  74 17                     JZ 0x005f3a90
005F3A79  0F AF C1                  IMUL EAX,ECX
005F3A7C  03 C7                     ADD EAX,EDI
005F3A7E  33 C9                     XOR ECX,ECX
005F3A80  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
005F3A83  8B C1                     MOV EAX,ECX
005F3A85  85 C0                     TEST EAX,EAX
005F3A87  75 07                     JNZ 0x005f3a90
LAB_005f3a89:
005F3A89  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
LAB_005f3a90:
005F3A90  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005F3A93  5F                        POP EDI
005F3A94  5E                        POP ESI
005F3A95  5B                        POP EBX
005F3A96  8B E5                     MOV ESP,EBP
005F3A98  5D                        POP EBP
005F3A99  C2 0C 00                  RET 0xc
