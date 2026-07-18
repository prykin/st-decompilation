FUN_0061fc00:
0061FC00  55                        PUSH EBP
0061FC01  8B EC                     MOV EBP,ESP
0061FC03  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0061FC06  53                        PUSH EBX
0061FC07  56                        PUSH ESI
0061FC08  57                        PUSH EDI
0061FC09  C7 02 FF FF FF FF         MOV dword ptr [EDX],0xffffffff
0061FC0F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0061FC12  33 C0                     XOR EAX,EAX
0061FC14  33 DB                     XOR EBX,EBX
0061FC16  C7 02 FF FF FF FF         MOV dword ptr [EDX],0xffffffff
0061FC1C  8B B1 B9 00 00 00         MOV ESI,dword ptr [ECX + 0xb9]
0061FC22  83 CF FF                  OR EDI,0xffffffff
0061FC25  85 F6                     TEST ESI,ESI
0061FC27  74 60                     JZ 0x0061fc89
0061FC29  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0061FC2C  85 C9                     TEST ECX,ECX
0061FC2E  7C 59                     JL 0x0061fc89
0061FC30  33 D2                     XOR EDX,EDX
0061FC32  85 C9                     TEST ECX,ECX
0061FC34  7E 53                     JLE 0x0061fc89
0061FC36  3B D1                     CMP EDX,ECX
LAB_0061fc38:
0061FC38  73 0B                     JNC 0x0061fc45
0061FC3A  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0061FC3D  0F AF CA                  IMUL ECX,EDX
0061FC40  03 4E 1C                  ADD ECX,dword ptr [ESI + 0x1c]
0061FC43  EB 02                     JMP 0x0061fc47
LAB_0061fc45:
0061FC45  33 C9                     XOR ECX,ECX
LAB_0061fc47:
0061FC47  8B 09                     MOV ECX,dword ptr [ECX]
0061FC49  85 C9                     TEST ECX,ECX
0061FC4B  76 0D                     JBE 0x0061fc5a
0061FC4D  3B CB                     CMP ECX,EBX
0061FC4F  76 09                     JBE 0x0061fc5a
0061FC51  8B FA                     MOV EDI,EDX
0061FC53  8B D9                     MOV EBX,ECX
0061FC55  B8 01 00 00 00            MOV EAX,0x1
LAB_0061fc5a:
0061FC5A  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0061FC5D  42                        INC EDX
0061FC5E  3B D1                     CMP EDX,ECX
0061FC60  7C D6                     JL 0x0061fc38
0061FC62  85 FF                     TEST EDI,EDI
0061FC64  7C 23                     JL 0x0061fc89
0061FC66  3B F9                     CMP EDI,ECX
0061FC68  73 0D                     JNC 0x0061fc77
0061FC6A  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0061FC6D  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0061FC70  0F AF CF                  IMUL ECX,EDI
0061FC73  03 CA                     ADD ECX,EDX
0061FC75  EB 02                     JMP 0x0061fc79
LAB_0061fc77:
0061FC77  33 C9                     XOR ECX,ECX
LAB_0061fc79:
0061FC79  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0061FC7C  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
0061FC7F  89 16                     MOV dword ptr [ESI],EDX
0061FC81  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0061FC84  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
0061FC87  89 0A                     MOV dword ptr [EDX],ECX
LAB_0061fc89:
0061FC89  5F                        POP EDI
0061FC8A  5E                        POP ESI
0061FC8B  5B                        POP EBX
0061FC8C  5D                        POP EBP
0061FC8D  C2 08 00                  RET 0x8
