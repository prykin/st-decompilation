FUN_00566aa0:
00566AA0  56                        PUSH ESI
00566AA1  8B F1                     MOV ESI,ECX
00566AA3  57                        PUSH EDI
00566AA4  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00566AA7  85 C0                     TEST EAX,EAX
00566AA9  0F 84 C8 00 00 00         JZ 0x00566b77
00566AAF  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
00566AB2  85 C0                     TEST EAX,EAX
00566AB4  0F 84 BD 00 00 00         JZ 0x00566b77
00566ABA  33 C0                     XOR EAX,EAX
00566ABC  8A 46 38                  MOV AL,byte ptr [ESI + 0x38]
00566ABF  83 F8 03                  CMP EAX,0x3
00566AC2  0F 87 AF 00 00 00         JA 0x00566b77
switchD_00566ac8::switchD:
00566AC8  FF 24 85 7C 6B 56 00      JMP dword ptr [EAX*0x4 + 0x566b7c]
switchD_00566ac8::caseD_0:
00566ACF  8B 7E 2C                  MOV EDI,dword ptr [ESI + 0x2c]
00566AD2  EB 08                     JMP 0x00566adc
switchD_00566ac8::caseD_2:
00566AD4  8B 7E 30                  MOV EDI,dword ptr [ESI + 0x30]
00566AD7  EB 03                     JMP 0x00566adc
switchD_00566ac8::caseD_3:
00566AD9  8B 7E 34                  MOV EDI,dword ptr [ESI + 0x34]
LAB_00566adc:
00566ADC  83 FF 01                  CMP EDI,0x1
00566ADF  0F 8C 92 00 00 00         JL 0x00566b77
00566AE5  8B 46 39                  MOV EAX,dword ptr [ESI + 0x39]
00566AE8  85 C0                     TEST EAX,EAX
00566AEA  7C 7D                     JL 0x00566b69
00566AEC  B9 58 76 80 00            MOV ECX,0x807658
00566AF1  E8 4A DD E9 FF            CALL 0x00404840
00566AF6  85 C0                     TEST EAX,EAX
00566AF8  75 7D                     JNZ 0x00566b77
00566AFA  83 FF 01                  CMP EDI,0x1
00566AFD  7E 3E                     JLE 0x00566b3d
00566AFF  8A 46 38                  MOV AL,byte ptr [ESI + 0x38]
00566B02  3C 01                     CMP AL,0x1
00566B04  74 04                     JZ 0x00566b0a
00566B06  3C 03                     CMP AL,0x3
00566B08  75 33                     JNZ 0x00566b3d
LAB_00566b0a:
00566B0A  E8 B1 7B 1C 00            CALL 0x0072e6c0
00566B0F  8D 4F FF                  LEA ECX,[EDI + -0x1]
00566B12  33 D2                     XOR EDX,EDX
00566B14  F7 F1                     DIV ECX
00566B16  8B 46 39                  MOV EAX,dword ptr [ESI + 0x39]
00566B19  42                        INC EDX
00566B1A  3B D0                     CMP EDX,EAX
00566B1C  75 09                     JNZ 0x00566b27
00566B1E  83 7E 3D 02               CMP dword ptr [ESI + 0x3d],0x2
00566B22  7C 03                     JL 0x00566b27
00566B24  8D 50 01                  LEA EDX,[EAX + 0x1]
LAB_00566b27:
00566B27  3B D7                     CMP EDX,EDI
00566B29  7C 31                     JL 0x00566b5c
00566B2B  BA 01 00 00 00            MOV EDX,0x1
00566B30  6A 00                     PUSH 0x0
00566B32  52                        PUSH EDX
00566B33  8B CE                     MOV ECX,ESI
00566B35  E8 89 AF E9 FF            CALL 0x00401ac3
00566B3A  5F                        POP EDI
00566B3B  5E                        POP ESI
00566B3C  C3                        RET
LAB_00566b3d:
00566B3D  E8 7E 7B 1C 00            CALL 0x0072e6c0
00566B42  33 D2                     XOR EDX,EDX
00566B44  F7 F7                     DIV EDI
00566B46  8B 46 39                  MOV EAX,dword ptr [ESI + 0x39]
00566B49  3B D0                     CMP EDX,EAX
00566B4B  75 09                     JNZ 0x00566b56
00566B4D  83 7E 3D 02               CMP dword ptr [ESI + 0x3d],0x2
00566B51  7C 03                     JL 0x00566b56
00566B53  8D 50 01                  LEA EDX,[EAX + 0x1]
LAB_00566b56:
00566B56  3B D7                     CMP EDX,EDI
00566B58  7C 02                     JL 0x00566b5c
00566B5A  33 D2                     XOR EDX,EDX
LAB_00566b5c:
00566B5C  6A 00                     PUSH 0x0
00566B5E  52                        PUSH EDX
00566B5F  8B CE                     MOV ECX,ESI
00566B61  E8 5D AF E9 FF            CALL 0x00401ac3
00566B66  5F                        POP EDI
00566B67  5E                        POP ESI
00566B68  C3                        RET
LAB_00566b69:
00566B69  68 D0 07 00 00            PUSH 0x7d0
00566B6E  6A 00                     PUSH 0x0
00566B70  8B CE                     MOV ECX,ESI
00566B72  E8 4C AF E9 FF            CALL 0x00401ac3
switchD_00566ac8::default:
00566B77  5F                        POP EDI
00566B78  5E                        POP ESI
00566B79  C3                        RET
