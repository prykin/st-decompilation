FUN_0073e825:
0073E825  83 3D 40 71 85 00 00      CMP dword ptr [0x00857140],0x0
0073E82C  75 4C                     JNZ 0x0073e87a
0073E82E  DD 15 10 74 85 00         FST double ptr [0x00857410]
0073E834  8A 85 70 FF FF FF         MOV AL,byte ptr [EBP + 0xffffff70]
0073E83A  0A C0                     OR AL,AL
0073E83C  74 1A                     JZ 0x0073e858
0073E83E  3C FF                     CMP AL,0xff
0073E840  74 40                     JZ 0x0073e882
0073E842  3C FE                     CMP AL,0xfe
0073E844  74 3C                     JZ 0x0073e882
0073E846  0A C0                     OR AL,AL
0073E848  74 30                     JZ 0x0073e87a
0073E84A  0F BE C0                  MOVSX EAX,AL
0073E84D  89 85 72 FF FF FF         MOV dword ptr [EBP + 0xffffff72],EAX
0073E853  E9 9B 00 00 00            JMP 0x0073e8f3
LAB_0073e858:
0073E858  66 8B 85 5C FF FF FF      MOV AX,word ptr [EBP + 0xffffff5c]
0073E85F  66 83 E0 20               AND AX,0x20
0073E863  75 15                     JNZ 0x0073e87a
0073E865  9B DF E0                  FSTSW AX
0073E868  66 83 E0 20               AND AX,0x20
0073E86C  74 0C                     JZ 0x0073e87a
0073E86E  C7 85 72 FF FF FF 08 00 00 00  MOV dword ptr [EBP + 0xffffff72],0x8
0073E878  EB 79                     JMP 0x0073e8f3
LAB_0073e87a:
0073E87A  D9 AD 5C FF FF FF         FLDCW word ptr [EBP + 0xffffff5c]
0073E880  9B                        WAIT
0073E881  C3                        RET
LAB_0073e882:
0073E882  66 A1 16 74 85 00         MOV AX,[0x00857416]
0073E888  66 25 F0 7F               AND AX,0x7ff0
0073E88C  66 0B C0                  OR AX,AX
0073E88F  74 08                     JZ 0x0073e899
0073E891  66 3D F0 7F               CMP AX,0x7ff0
0073E895  74 30                     JZ 0x0073e8c7
0073E897  EB BF                     JMP 0x0073e858
LAB_0073e899:
0073E899  C7 85 72 FF FF FF 04 00 00 00  MOV dword ptr [EBP + 0xffffff72],0x4
0073E8A3  DD 05 F8 0D 7A 00         FLD double ptr [0x007a0df8]
0073E8A9  D9 C9                     FXCH
0073E8AB  D9 FD                     FSCALE
0073E8AD  DD D9                     FSTP ST1
0073E8AF  D9 C0                     FLD ST0
0073E8B1  D9 E1                     FABS
0073E8B3  DC 1D E8 0D 7A 00         FCOMP double ptr [0x007a0de8]
0073E8B9  9B DF E0                  FSTSW AX
0073E8BC  9E                        SAHF
0073E8BD  73 34                     JNC 0x0073e8f3
0073E8BF  DC 0D 08 0E 7A 00         FMUL double ptr [0x007a0e08]
0073E8C5  EB 2C                     JMP 0x0073e8f3
LAB_0073e8c7:
0073E8C7  C7 85 72 FF FF FF 03 00 00 00  MOV dword ptr [EBP + 0xffffff72],0x3
0073E8D1  DD 05 F0 0D 7A 00         FLD double ptr [0x007a0df0]
0073E8D7  D9 C9                     FXCH
0073E8D9  D9 FD                     FSCALE
0073E8DB  DD D9                     FSTP ST1
0073E8DD  D9 C0                     FLD ST0
0073E8DF  D9 E1                     FABS
0073E8E1  DC 1D E0 0D 7A 00         FCOMP double ptr [0x007a0de0]
0073E8E7  9B DF E0                  FSTSW AX
0073E8EA  9E                        SAHF
0073E8EB  76 06                     JBE 0x0073e8f3
0073E8ED  DC 0D 00 0E 7A 00         FMUL double ptr [0x007a0e00]
LAB_0073e8f3:
0073E8F3  56                        PUSH ESI
0073E8F4  57                        PUSH EDI
0073E8F5  8B 9D 6C FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff6c]
0073E8FB  43                        INC EBX
0073E8FC  89 9D 76 FF FF FF         MOV dword ptr [EBP + 0xffffff76],EBX
0073E902  80 3D 18 74 85 00 00      CMP byte ptr [0x00857418],0x0
0073E909  75 1A                     JNZ 0x0073e925
0073E90B  FC                        CLD
0073E90C  8D 75 08                  LEA ESI,[EBP + 0x8]
0073E90F  8D BD 7A FF FF FF         LEA EDI,[EBP + 0xffffff7a]
0073E915  A5                        MOVSD ES:EDI,ESI
0073E916  A5                        MOVSD ES:EDI,ESI
0073E917  80 7B 0C 01               CMP byte ptr [EBX + 0xc],0x1
0073E91B  74 08                     JZ 0x0073e925
0073E91D  8D 75 10                  LEA ESI,[EBP + 0x10]
0073E920  8D 7D 82                  LEA EDI,[EBP + -0x7e]
0073E923  A5                        MOVSD ES:EDI,ESI
0073E924  A5                        MOVSD ES:EDI,ESI
LAB_0073e925:
0073E925  DD 5D 8A                  FSTP double ptr [EBP + -0x76]
0073E928  8D 85 72 FF FF FF         LEA EAX,[EBP + 0xffffff72]
0073E92E  8D 9D 5C FF FF FF         LEA EBX,[EBP + 0xffffff5c]
0073E934  53                        PUSH EBX
0073E935  50                        PUSH EAX
0073E936  8B 9D 6C FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff6c]
0073E93C  8A 43 0E                  MOV AL,byte ptr [EBX + 0xe]
0073E93F  0F BE C0                  MOVSX EAX,AL
0073E942  50                        PUSH EAX
0073E943  E8 08 5E 00 00            CALL 0x00744750
0073E948  83 C4 0C                  ADD ESP,0xc
0073E94B  5F                        POP EDI
0073E94C  5E                        POP ESI
0073E94D  DD 45 8A                  FLD double ptr [EBP + -0x76]
0073E950  E9 25 FF FF FF            JMP 0x0073e87a
