STT3DSprC::LoadSequence:
004AB880  55                        PUSH EBP
004AB881  8B EC                     MOV EBP,ESP
004AB883  83 EC 54                  SUB ESP,0x54
004AB886  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004AB88B  53                        PUSH EBX
004AB88C  56                        PUSH ESI
004AB88D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004AB890  57                        PUSH EDI
004AB891  8D 55 B0                  LEA EDX,[EBP + -0x50]
004AB894  8D 4D AC                  LEA ECX,[EBP + -0x54]
004AB897  6A 00                     PUSH 0x0
004AB899  52                        PUSH EDX
004AB89A  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
004AB89D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004AB8A3  E8 48 1F 28 00            CALL 0x0072d7f0
004AB8A8  83 C4 08                  ADD ESP,0x8
004AB8AB  85 C0                     TEST EAX,EAX
004AB8AD  0F 85 AE 01 00 00         JNZ 0x004aba61
004AB8B3  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
004AB8B6  83 7B 18 FF               CMP dword ptr [EBX + 0x18],-0x1
004AB8BA  75 14                     JNZ 0x004ab8d0
004AB8BC  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004AB8C1  6A 22                     PUSH 0x22
004AB8C3  68 38 C6 7A 00            PUSH 0x7ac638
004AB8C8  50                        PUSH EAX
004AB8C9  6A FF                     PUSH -0x1
004AB8CB  E8 70 A5 1F 00            CALL 0x006a5e40
LAB_004ab8d0:
004AB8D0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004AB8D3  84 C0                     TEST AL,AL
004AB8D5  7C 0B                     JL 0x004ab8e2
004AB8D7  8B 4B 14                  MOV ECX,dword ptr [EBX + 0x14]
004AB8DA  0F BE D0                  MOVSX EDX,AL
004AB8DD  49                        DEC ECX
004AB8DE  3B D1                     CMP EDX,ECX
004AB8E0  7E 17                     JLE 0x004ab8f9
LAB_004ab8e2:
004AB8E2  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004AB8E7  6A 23                     PUSH 0x23
004AB8E9  68 38 C6 7A 00            PUSH 0x7ac638
004AB8EE  50                        PUSH EAX
004AB8EF  6A FF                     PUSH -0x1
004AB8F1  E8 4A A5 1F 00            CALL 0x006a5e40
004AB8F6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_004ab8f9:
004AB8F9  8B 4B 20                  MOV ECX,dword ptr [EBX + 0x20]
004AB8FC  0F BE F0                  MOVSX ESI,AL
004AB8FF  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
004AB902  8D 34 F6                  LEA ESI,[ESI + ESI*0x8]
004AB905  C1 E6 02                  SHL ESI,0x2
004AB908  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
004AB90B  83 3C 31 00               CMP dword ptr [ECX + ESI*0x1],0x0
004AB90F  74 21                     JZ 0x004ab932
004AB911  50                        PUSH EAX
004AB912  8B CB                     MOV ECX,EBX
004AB914  E8 71 90 F5 FF            CALL 0x0040498a
004AB919  85 C0                     TEST EAX,EAX
004AB91B  74 15                     JZ 0x004ab932
004AB91D  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004AB923  6A 24                     PUSH 0x24
004AB925  68 38 C6 7A 00            PUSH 0x7ac638
004AB92A  52                        PUSH EDX
004AB92B  6A FF                     PUSH -0x1
004AB92D  E8 0E A5 1F 00            CALL 0x006a5e40
LAB_004ab932:
004AB932  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004AB935  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004AB938  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004AB93B  6A 00                     PUSH 0x0
004AB93D  6A 00                     PUSH 0x0
004AB93F  6A 01                     PUSH 0x1
004AB941  6A 00                     PUSH 0x0
004AB943  6A FF                     PUSH -0x1
004AB945  50                        PUSH EAX
004AB946  51                        PUSH ECX
004AB947  52                        PUSH EDX
004AB948  E8 A3 E1 25 00            CALL 0x00709af0
004AB94D  8B 4B 20                  MOV ECX,dword ptr [EBX + 0x20]
004AB950  83 C4 20                  ADD ESP,0x20
004AB953  89 04 31                  MOV dword ptr [ECX + ESI*0x1],EAX
004AB956  8B 53 20                  MOV EDX,dword ptr [EBX + 0x20]
004AB959  8B 04 32                  MOV EAX,dword ptr [EDX + ESI*0x1]
004AB95C  8B 38                     MOV EDI,dword ptr [EAX]
004AB95E  8D 0C BD 00 00 00 00      LEA ECX,[EDI*0x4 + 0x0]
004AB965  51                        PUSH ECX
004AB966  E8 05 F3 1F 00            CALL 0x006aac70
004AB96B  8B 53 20                  MOV EDX,dword ptr [EBX + 0x20]
004AB96E  89 44 32 04               MOV dword ptr [EDX + ESI*0x1 + 0x4],EAX
004AB972  33 C0                     XOR EAX,EAX
004AB974  85 FF                     TEST EDI,EDI
004AB976  7E 17                     JLE 0x004ab98f
LAB_004ab978:
004AB978  8B 4B 20                  MOV ECX,dword ptr [EBX + 0x20]
004AB97B  03 CE                     ADD ECX,ESI
004AB97D  40                        INC EAX
004AB97E  3B C7                     CMP EAX,EDI
004AB980  8B 11                     MOV EDX,dword ptr [ECX]
004AB982  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
004AB985  8B 54 82 2D               MOV EDX,dword ptr [EDX + EAX*0x4 + 0x2d]
004AB989  89 54 81 FC               MOV dword ptr [ECX + EAX*0x4 + -0x4],EDX
004AB98D  7C E9                     JL 0x004ab978
LAB_004ab98f:
004AB98F  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
004AB992  83 C9 FF                  OR ECX,0xffffffff
004AB995  33 C0                     XOR EAX,EAX
004AB997  F2 AE                     SCASB.REPNE ES:EDI
004AB999  F7 D1                     NOT ECX
004AB99B  51                        PUSH ECX
004AB99C  E8 CF F2 1F 00            CALL 0x006aac70
004AB9A1  8B 4B 20                  MOV ECX,dword ptr [EBX + 0x20]
004AB9A4  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
004AB9A7  89 44 31 08               MOV dword ptr [ECX + ESI*0x1 + 0x8],EAX
004AB9AB  83 C9 FF                  OR ECX,0xffffffff
004AB9AE  33 C0                     XOR EAX,EAX
004AB9B0  8B 53 20                  MOV EDX,dword ptr [EBX + 0x20]
004AB9B3  F2 AE                     SCASB.REPNE ES:EDI
004AB9B5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004AB9B8  F7 D1                     NOT ECX
004AB9BA  2B F9                     SUB EDI,ECX
004AB9BC  8B F7                     MOV ESI,EDI
004AB9BE  8B FA                     MOV EDI,EDX
004AB9C0  8B D1                     MOV EDX,ECX
004AB9C2  8B 7C 07 08               MOV EDI,dword ptr [EDI + EAX*0x1 + 0x8]
004AB9C6  C1 E9 02                  SHR ECX,0x2
004AB9C9  F3 A5                     MOVSD.REP ES:EDI,ESI
004AB9CB  8B CA                     MOV ECX,EDX
004AB9CD  8A 55 14                  MOV DL,byte ptr [EBP + 0x14]
004AB9D0  83 E1 03                  AND ECX,0x3
004AB9D3  F3 A4                     MOVSB.REP ES:EDI,ESI
004AB9D5  8B 4B 20                  MOV ECX,dword ptr [EBX + 0x20]
004AB9D8  88 54 01 0C               MOV byte ptr [ECX + EAX*0x1 + 0xc],DL
004AB9DC  8B 4B 20                  MOV ECX,dword ptr [EBX + 0x20]
004AB9DF  33 D2                     XOR EDX,EDX
004AB9E1  89 54 01 18               MOV dword ptr [ECX + EAX*0x1 + 0x18],EDX
004AB9E5  8B 4B 20                  MOV ECX,dword ptr [EBX + 0x20]
004AB9E8  52                        PUSH EDX
004AB9E9  89 54 01 10               MOV dword ptr [ECX + EAX*0x1 + 0x10],EDX
004AB9ED  8B 4B 20                  MOV ECX,dword ptr [EBX + 0x20]
004AB9F0  03 C8                     ADD ECX,EAX
004AB9F2  8B 31                     MOV ESI,dword ptr [ECX]
004AB9F4  8B 36                     MOV ESI,dword ptr [ESI]
004AB9F6  4E                        DEC ESI
004AB9F7  89 71 14                  MOV dword ptr [ECX + 0x14],ESI
004AB9FA  8B 4B 20                  MOV ECX,dword ptr [EBX + 0x20]
004AB9FD  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
004ABA00  89 54 01 20               MOV dword ptr [ECX + EAX*0x1 + 0x20],EDX
004ABA04  8B 4B 20                  MOV ECX,dword ptr [EBX + 0x20]
004ABA07  8B 04 01                  MOV EAX,dword ptr [ECX + EAX*0x1]
004ABA0A  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
004ABA0D  8B 50 21                  MOV EDX,dword ptr [EAX + 0x21]
004ABA10  8B 00                     MOV EAX,dword ptr [EAX]
004ABA12  52                        PUSH EDX
004ABA13  50                        PUSH EAX
004ABA14  56                        PUSH ESI
004ABA15  51                        PUSH ECX
004ABA16  8B 4B 3C                  MOV ECX,dword ptr [EBX + 0x3c]
004ABA19  E8 C2 DE 23 00            CALL 0x006e98e0
004ABA1E  8B 53 20                  MOV EDX,dword ptr [EBX + 0x20]
004ABA21  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004ABA24  66 81 64 0A 0E 37 FE      AND word ptr [EDX + ECX*0x1 + 0xe],0xfe37
004ABA2B  8D 44 0A 0E               LEA EAX,[EDX + ECX*0x1 + 0xe]
004ABA2F  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
004ABA32  80 4C 08 0E 20            OR byte ptr [EAX + ECX*0x1 + 0xe],0x20
004ABA37  BA 01 00 00 00            MOV EDX,0x1
004ABA3C  8D 44 08 0E               LEA EAX,[EAX + ECX*0x1 + 0xe]
004ABA40  8B CE                     MOV ECX,ESI
004ABA42  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
004ABA45  D3 E2                     SHL EDX,CL
004ABA47  F7 D2                     NOT EDX
004ABA49  23 C2                     AND EAX,EDX
004ABA4B  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
004ABA4E  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
004ABA51  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004ABA56  33 C0                     XOR EAX,EAX
004ABA58  5F                        POP EDI
004ABA59  5E                        POP ESI
004ABA5A  5B                        POP EBX
004ABA5B  8B E5                     MOV ESP,EBP
004ABA5D  5D                        POP EBP
004ABA5E  C2 10 00                  RET 0x10
LAB_004aba61:
004ABA61  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
004ABA64  68 1C C6 7A 00            PUSH 0x7ac61c
004ABA69  68 CC 4C 7A 00            PUSH 0x7a4ccc
004ABA6E  50                        PUSH EAX
004ABA6F  6A 00                     PUSH 0x0
004ABA71  6A 3B                     PUSH 0x3b
004ABA73  68 38 C6 7A 00            PUSH 0x7ac638
004ABA78  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004ABA7E  E8 4D 1A 20 00            CALL 0x006ad4d0
004ABA83  83 C4 18                  ADD ESP,0x18
004ABA86  85 C0                     TEST EAX,EAX
004ABA88  74 01                     JZ 0x004aba8b
004ABA8A  CC                        INT3
LAB_004aba8b:
004ABA8B  5F                        POP EDI
004ABA8C  5E                        POP ESI
004ABA8D  83 C8 FF                  OR EAX,0xffffffff
004ABA90  5B                        POP EBX
004ABA91  8B E5                     MOV ESP,EBP
004ABA93  5D                        POP EBP
004ABA94  C2 10 00                  RET 0x10
