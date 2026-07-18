FUN_005eff00:
005EFF00  8B 91 77 02 00 00         MOV EDX,dword ptr [ECX + 0x277]
005EFF06  B8 79 19 8C 02            MOV EAX,0x28c1979
005EFF0B  85 D2                     TEST EDX,EDX
005EFF0D  7C 10                     JL 0x005eff1f
005EFF0F  F7 EA                     IMUL EDX
005EFF11  D1 FA                     SAR EDX,0x1
005EFF13  8B C2                     MOV EAX,EDX
005EFF15  C1 E8 1F                  SHR EAX,0x1f
005EFF18  03 D0                     ADD EDX,EAX
005EFF1A  0F BF C2                  MOVSX EAX,DX
005EFF1D  EB 0F                     JMP 0x005eff2e
LAB_005eff1f:
005EFF1F  F7 EA                     IMUL EDX
005EFF21  D1 FA                     SAR EDX,0x1
005EFF23  8B C2                     MOV EAX,EDX
005EFF25  C1 E8 1F                  SHR EAX,0x1f
005EFF28  03 D0                     ADD EDX,EAX
005EFF2A  0F BF C2                  MOVSX EAX,DX
005EFF2D  48                        DEC EAX
LAB_005eff2e:
005EFF2E  8B 91 7B 02 00 00         MOV EDX,dword ptr [ECX + 0x27b]
005EFF34  66 89 41 47               MOV word ptr [ECX + 0x47],AX
005EFF38  85 D2                     TEST EDX,EDX
005EFF3A  B8 79 19 8C 02            MOV EAX,0x28c1979
005EFF3F  7C 10                     JL 0x005eff51
005EFF41  F7 EA                     IMUL EDX
005EFF43  D1 FA                     SAR EDX,0x1
005EFF45  8B C2                     MOV EAX,EDX
005EFF47  C1 E8 1F                  SHR EAX,0x1f
005EFF4A  03 D0                     ADD EDX,EAX
005EFF4C  0F BF C2                  MOVSX EAX,DX
005EFF4F  EB 0F                     JMP 0x005eff60
LAB_005eff51:
005EFF51  F7 EA                     IMUL EDX
005EFF53  D1 FA                     SAR EDX,0x1
005EFF55  8B C2                     MOV EAX,EDX
005EFF57  C1 E8 1F                  SHR EAX,0x1f
005EFF5A  03 D0                     ADD EDX,EAX
005EFF5C  0F BF C2                  MOVSX EAX,DX
005EFF5F  48                        DEC EAX
LAB_005eff60:
005EFF60  8B 91 7F 02 00 00         MOV EDX,dword ptr [ECX + 0x27f]
005EFF66  66 89 41 49               MOV word ptr [ECX + 0x49],AX
005EFF6A  85 D2                     TEST EDX,EDX
005EFF6C  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005EFF71  7C 11                     JL 0x005eff84
005EFF73  F7 EA                     IMUL EDX
005EFF75  C1 FA 06                  SAR EDX,0x6
005EFF78  8B C2                     MOV EAX,EDX
005EFF7A  C1 E8 1F                  SHR EAX,0x1f
005EFF7D  03 D0                     ADD EDX,EAX
005EFF7F  0F BF C2                  MOVSX EAX,DX
005EFF82  EB 10                     JMP 0x005eff94
LAB_005eff84:
005EFF84  F7 EA                     IMUL EDX
005EFF86  C1 FA 06                  SAR EDX,0x6
005EFF89  8B C2                     MOV EAX,EDX
005EFF8B  C1 E8 1F                  SHR EAX,0x1f
005EFF8E  03 D0                     ADD EDX,EAX
005EFF90  0F BF C2                  MOVSX EAX,DX
005EFF93  48                        DEC EAX
LAB_005eff94:
005EFF94  66 8B 91 77 02 00 00      MOV DX,word ptr [ECX + 0x277]
005EFF9B  66 89 41 4B               MOV word ptr [ECX + 0x4b],AX
005EFF9F  66 89 51 41               MOV word ptr [ECX + 0x41],DX
005EFFA3  66 8B 91 7F 02 00 00      MOV DX,word ptr [ECX + 0x27f]
005EFFAA  66 89 51 45               MOV word ptr [ECX + 0x45],DX
005EFFAE  66 8B 91 44 02 00 00      MOV DX,word ptr [ECX + 0x244]
005EFFB5  66 8B 81 7B 02 00 00      MOV AX,word ptr [ECX + 0x27b]
005EFFBC  66 89 51 5D               MOV word ptr [ECX + 0x5d],DX
005EFFC0  66 8B 91 BA 02 00 00      MOV DX,word ptr [ECX + 0x2ba]
005EFFC7  66 89 41 43               MOV word ptr [ECX + 0x43],AX
005EFFCB  66 8B 81 42 02 00 00      MOV AX,word ptr [ECX + 0x242]
005EFFD2  66 6B D2 0F               IMUL DX,DX,0xf
005EFFD6  66 89 41 5B               MOV word ptr [ECX + 0x5b],AX
005EFFDA  66 8B 81 46 02 00 00      MOV AX,word ptr [ECX + 0x246]
005EFFE1  66 89 41 5F               MOV word ptr [ECX + 0x5f],AX
005EFFE5  66 89 51 6C               MOV word ptr [ECX + 0x6c],DX
005EFFE9  C3                        RET
