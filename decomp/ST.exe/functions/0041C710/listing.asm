FUN_0041c710:
0041C710  55                        PUSH EBP
0041C711  8B EC                     MOV EBP,ESP
0041C713  83 EC 08                  SUB ESP,0x8
0041C716  53                        PUSH EBX
0041C717  56                        PUSH ESI
0041C718  8B F1                     MOV ESI,ECX
0041C71A  57                        PUSH EDI
0041C71B  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
0041C721  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
0041C724  85 C0                     TEST EAX,EAX
0041C726  0F 85 B3 00 00 00         JNZ 0x0041c7df
0041C72C  85 FF                     TEST EDI,EDI
0041C72E  0F 84 D5 02 00 00         JZ 0x0041ca09
0041C734  A0 4D 87 80 00            MOV AL,[0x0080874d]
0041C739  0F BF 5E 5F               MOVSX EBX,word ptr [ESI + 0x5f]
0041C73D  3C FF                     CMP AL,0xff
0041C73F  0F 84 C4 02 00 00         JZ 0x0041ca09
0041C745  8B 87 F8 00 00 00         MOV EAX,dword ptr [EDI + 0xf8]
0041C74B  85 C0                     TEST EAX,EAX
0041C74D  0F 84 B6 02 00 00         JZ 0x0041ca09
0041C753  0F BF 56 5D               MOVSX EDX,word ptr [ESI + 0x5d]
0041C757  8D 45 F8                  LEA EAX,[EBP + -0x8]
0041C75A  8D 4D FC                  LEA ECX,[EBP + -0x4]
0041C75D  50                        PUSH EAX
0041C75E  51                        PUSH ECX
0041C75F  0F BF 46 5B               MOVSX EAX,word ptr [ESI + 0x5b]
0041C763  8B 8F 0C 01 00 00         MOV ECX,dword ptr [EDI + 0x10c]
0041C769  52                        PUSH EDX
0041C76A  50                        PUSH EAX
0041C76B  51                        PUSH ECX
0041C76C  8B CF                     MOV ECX,EDI
0041C76E  E8 E0 77 FE FF            CALL 0x00403f53
0041C773  85 DB                     TEST EBX,EBX
0041C775  0F 8C 8E 02 00 00         JL 0x0041ca09
0041C77B  83 FB 05                  CMP EBX,0x5
0041C77E  0F 8D 85 02 00 00         JGE 0x0041ca09
0041C784  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0041C787  85 D2                     TEST EDX,EDX
0041C789  0F 8C 7A 02 00 00         JL 0x0041ca09
0041C78F  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
0041C792  3B D1                     CMP EDX,ECX
0041C794  0F 8D 6F 02 00 00         JGE 0x0041ca09
0041C79A  8B 04 9D D0 AE 79 00      MOV EAX,dword ptr [EBX*0x4 + 0x79aed0]
0041C7A1  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0041C7A4  03 C6                     ADD EAX,ESI
0041C7A6  85 C0                     TEST EAX,EAX
0041C7A8  0F 8C 5B 02 00 00         JL 0x0041ca09
0041C7AE  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
0041C7B1  0F 8D 52 02 00 00         JGE 0x0041ca09
0041C7B7  8B 7F 4C                  MOV EDI,dword ptr [EDI + 0x4c]
0041C7BA  85 FF                     TEST EDI,EDI
0041C7BC  0F 84 47 02 00 00         JZ 0x0041ca09
0041C7C2  0F AF C1                  IMUL EAX,ECX
0041C7C5  03 C7                     ADD EAX,EDI
0041C7C7  33 C9                     XOR ECX,ECX
0041C7C9  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
0041C7CC  8B C1                     MOV EAX,ECX
0041C7CE  85 C0                     TEST EAX,EAX
0041C7D0  0F 85 33 02 00 00         JNZ 0x0041ca09
LAB_0041c7d6:
0041C7D6  5F                        POP EDI
0041C7D7  5E                        POP ESI
0041C7D8  33 C0                     XOR EAX,EAX
0041C7DA  5B                        POP EBX
0041C7DB  8B E5                     MOV ESP,EBP
0041C7DD  5D                        POP EBP
0041C7DE  C3                        RET
LAB_0041c7df:
0041C7DF  85 FF                     TEST EDI,EDI
0041C7E1  74 F3                     JZ 0x0041c7d6
0041C7E3  A0 4D 87 80 00            MOV AL,[0x0080874d]
0041C7E8  0F BF 5E 5F               MOVSX EBX,word ptr [ESI + 0x5f]
0041C7EC  3C FF                     CMP AL,0xff
0041C7EE  74 6D                     JZ 0x0041c85d
0041C7F0  8B 87 F8 00 00 00         MOV EAX,dword ptr [EDI + 0xf8]
0041C7F6  85 C0                     TEST EAX,EAX
0041C7F8  74 63                     JZ 0x0041c85d
0041C7FA  0F BF 4E 5D               MOVSX ECX,word ptr [ESI + 0x5d]
0041C7FE  8D 55 FC                  LEA EDX,[EBP + -0x4]
0041C801  8D 45 F8                  LEA EAX,[EBP + -0x8]
0041C804  52                        PUSH EDX
0041C805  50                        PUSH EAX
0041C806  0F BF 56 5B               MOVSX EDX,word ptr [ESI + 0x5b]
0041C80A  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
0041C810  51                        PUSH ECX
0041C811  52                        PUSH EDX
0041C812  50                        PUSH EAX
0041C813  8B CF                     MOV ECX,EDI
0041C815  E8 39 77 FE FF            CALL 0x00403f53
0041C81A  85 DB                     TEST EBX,EBX
0041C81C  7C 3F                     JL 0x0041c85d
0041C81E  83 FB 05                  CMP EBX,0x5
0041C821  7D 3A                     JGE 0x0041c85d
0041C823  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0041C826  85 D2                     TEST EDX,EDX
0041C828  7C 33                     JL 0x0041c85d
0041C82A  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
0041C82D  3B D1                     CMP EDX,ECX
0041C82F  7D 2C                     JGE 0x0041c85d
0041C831  8B 04 9D D0 AE 79 00      MOV EAX,dword ptr [EBX*0x4 + 0x79aed0]
0041C838  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0041C83B  03 C3                     ADD EAX,EBX
0041C83D  85 C0                     TEST EAX,EAX
0041C83F  7C 1C                     JL 0x0041c85d
0041C841  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
0041C844  7D 17                     JGE 0x0041c85d
0041C846  8B 7F 4C                  MOV EDI,dword ptr [EDI + 0x4c]
0041C849  85 FF                     TEST EDI,EDI
0041C84B  74 10                     JZ 0x0041c85d
0041C84D  0F AF C1                  IMUL EAX,ECX
0041C850  03 C7                     ADD EAX,EDI
0041C852  33 C9                     XOR ECX,ECX
0041C854  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
0041C857  8B C1                     MOV EAX,ECX
0041C859  85 C0                     TEST EAX,EAX
0041C85B  74 0C                     JZ 0x0041c869
LAB_0041c85d:
0041C85D  5F                        POP EDI
0041C85E  5E                        POP ESI
0041C85F  B8 01 00 00 00            MOV EAX,0x1
0041C864  5B                        POP EBX
0041C865  8B E5                     MOV ESP,EBP
0041C867  5D                        POP EBP
0041C868  C3                        RET
LAB_0041c869:
0041C869  A0 4D 87 80 00            MOV AL,[0x0080874d]
0041C86E  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
0041C874  0F BF 5E 5F               MOVSX EBX,word ptr [ESI + 0x5f]
0041C878  3C FF                     CMP AL,0xff
0041C87A  74 6E                     JZ 0x0041c8ea
0041C87C  8B 87 F8 00 00 00         MOV EAX,dword ptr [EDI + 0xf8]
0041C882  85 C0                     TEST EAX,EAX
0041C884  74 64                     JZ 0x0041c8ea
0041C886  0F BF 4E 5D               MOVSX ECX,word ptr [ESI + 0x5d]
0041C88A  8D 55 FC                  LEA EDX,[EBP + -0x4]
0041C88D  8D 45 F8                  LEA EAX,[EBP + -0x8]
0041C890  52                        PUSH EDX
0041C891  50                        PUSH EAX
0041C892  0F BF 56 5B               MOVSX EDX,word ptr [ESI + 0x5b]
0041C896  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
0041C89C  42                        INC EDX
0041C89D  51                        PUSH ECX
0041C89E  52                        PUSH EDX
0041C89F  50                        PUSH EAX
0041C8A0  8B CF                     MOV ECX,EDI
0041C8A2  E8 AC 76 FE FF            CALL 0x00403f53
0041C8A7  85 DB                     TEST EBX,EBX
0041C8A9  7C 3F                     JL 0x0041c8ea
0041C8AB  83 FB 05                  CMP EBX,0x5
0041C8AE  7D 3A                     JGE 0x0041c8ea
0041C8B0  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0041C8B3  85 D2                     TEST EDX,EDX
0041C8B5  7C 33                     JL 0x0041c8ea
0041C8B7  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
0041C8BA  3B D1                     CMP EDX,ECX
0041C8BC  7D 2C                     JGE 0x0041c8ea
0041C8BE  8B 04 9D D0 AE 79 00      MOV EAX,dword ptr [EBX*0x4 + 0x79aed0]
0041C8C5  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0041C8C8  03 C3                     ADD EAX,EBX
0041C8CA  85 C0                     TEST EAX,EAX
0041C8CC  7C 1C                     JL 0x0041c8ea
0041C8CE  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
0041C8D1  7D 17                     JGE 0x0041c8ea
0041C8D3  8B 7F 4C                  MOV EDI,dword ptr [EDI + 0x4c]
0041C8D6  85 FF                     TEST EDI,EDI
0041C8D8  74 10                     JZ 0x0041c8ea
0041C8DA  0F AF C1                  IMUL EAX,ECX
0041C8DD  03 C7                     ADD EAX,EDI
0041C8DF  33 C9                     XOR ECX,ECX
0041C8E1  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
0041C8E4  8B C1                     MOV EAX,ECX
0041C8E6  85 C0                     TEST EAX,EAX
0041C8E8  74 0C                     JZ 0x0041c8f6
LAB_0041c8ea:
0041C8EA  5F                        POP EDI
0041C8EB  5E                        POP ESI
0041C8EC  B8 01 00 00 00            MOV EAX,0x1
0041C8F1  5B                        POP EBX
0041C8F2  8B E5                     MOV ESP,EBP
0041C8F4  5D                        POP EBP
0041C8F5  C3                        RET
LAB_0041c8f6:
0041C8F6  A0 4D 87 80 00            MOV AL,[0x0080874d]
0041C8FB  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
0041C901  0F BF 5E 5F               MOVSX EBX,word ptr [ESI + 0x5f]
0041C905  3C FF                     CMP AL,0xff
0041C907  74 6E                     JZ 0x0041c977
0041C909  8B 87 F8 00 00 00         MOV EAX,dword ptr [EDI + 0xf8]
0041C90F  85 C0                     TEST EAX,EAX
0041C911  74 64                     JZ 0x0041c977
0041C913  0F BF 4E 5D               MOVSX ECX,word ptr [ESI + 0x5d]
0041C917  8D 55 FC                  LEA EDX,[EBP + -0x4]
0041C91A  8D 45 F8                  LEA EAX,[EBP + -0x8]
0041C91D  52                        PUSH EDX
0041C91E  41                        INC ECX
0041C91F  0F BF 56 5B               MOVSX EDX,word ptr [ESI + 0x5b]
0041C923  50                        PUSH EAX
0041C924  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
0041C92A  51                        PUSH ECX
0041C92B  52                        PUSH EDX
0041C92C  50                        PUSH EAX
0041C92D  8B CF                     MOV ECX,EDI
0041C92F  E8 1F 76 FE FF            CALL 0x00403f53
0041C934  85 DB                     TEST EBX,EBX
0041C936  7C 3F                     JL 0x0041c977
0041C938  83 FB 05                  CMP EBX,0x5
0041C93B  7D 3A                     JGE 0x0041c977
0041C93D  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0041C940  85 D2                     TEST EDX,EDX
0041C942  7C 33                     JL 0x0041c977
0041C944  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
0041C947  3B D1                     CMP EDX,ECX
0041C949  7D 2C                     JGE 0x0041c977
0041C94B  8B 04 9D D0 AE 79 00      MOV EAX,dword ptr [EBX*0x4 + 0x79aed0]
0041C952  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0041C955  03 C3                     ADD EAX,EBX
0041C957  85 C0                     TEST EAX,EAX
0041C959  7C 1C                     JL 0x0041c977
0041C95B  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
0041C95E  7D 17                     JGE 0x0041c977
0041C960  8B 7F 4C                  MOV EDI,dword ptr [EDI + 0x4c]
0041C963  85 FF                     TEST EDI,EDI
0041C965  74 10                     JZ 0x0041c977
0041C967  0F AF C1                  IMUL EAX,ECX
0041C96A  03 C7                     ADD EAX,EDI
0041C96C  33 C9                     XOR ECX,ECX
0041C96E  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
0041C971  8B C1                     MOV EAX,ECX
0041C973  85 C0                     TEST EAX,EAX
0041C975  74 0C                     JZ 0x0041c983
LAB_0041c977:
0041C977  5F                        POP EDI
0041C978  5E                        POP ESI
0041C979  B8 01 00 00 00            MOV EAX,0x1
0041C97E  5B                        POP EBX
0041C97F  8B E5                     MOV ESP,EBP
0041C981  5D                        POP EBP
0041C982  C3                        RET
LAB_0041c983:
0041C983  A0 4D 87 80 00            MOV AL,[0x0080874d]
0041C988  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
0041C98E  0F BF 5E 5F               MOVSX EBX,word ptr [ESI + 0x5f]
0041C992  3C FF                     CMP AL,0xff
0041C994  74 73                     JZ 0x0041ca09
0041C996  8B 87 F8 00 00 00         MOV EAX,dword ptr [EDI + 0xf8]
0041C99C  85 C0                     TEST EAX,EAX
0041C99E  74 69                     JZ 0x0041ca09
0041C9A0  0F BF 4E 5D               MOVSX ECX,word ptr [ESI + 0x5d]
0041C9A4  8D 55 FC                  LEA EDX,[EBP + -0x4]
0041C9A7  8D 45 F8                  LEA EAX,[EBP + -0x8]
0041C9AA  52                        PUSH EDX
0041C9AB  41                        INC ECX
0041C9AC  0F BF 56 5B               MOVSX EDX,word ptr [ESI + 0x5b]
0041C9B0  50                        PUSH EAX
0041C9B1  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
0041C9B7  42                        INC EDX
0041C9B8  51                        PUSH ECX
0041C9B9  52                        PUSH EDX
0041C9BA  50                        PUSH EAX
0041C9BB  8B CF                     MOV ECX,EDI
0041C9BD  E8 91 75 FE FF            CALL 0x00403f53
0041C9C2  85 DB                     TEST EBX,EBX
0041C9C4  7C 43                     JL 0x0041ca09
0041C9C6  83 FB 05                  CMP EBX,0x5
0041C9C9  7D 3E                     JGE 0x0041ca09
0041C9CB  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0041C9CE  85 D2                     TEST EDX,EDX
0041C9D0  7C 37                     JL 0x0041ca09
0041C9D2  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
0041C9D5  3B D1                     CMP EDX,ECX
0041C9D7  7D 30                     JGE 0x0041ca09
0041C9D9  8B 04 9D D0 AE 79 00      MOV EAX,dword ptr [EBX*0x4 + 0x79aed0]
0041C9E0  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0041C9E3  03 C6                     ADD EAX,ESI
0041C9E5  85 C0                     TEST EAX,EAX
0041C9E7  7C 20                     JL 0x0041ca09
0041C9E9  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
0041C9EC  7D 1B                     JGE 0x0041ca09
0041C9EE  8B 7F 4C                  MOV EDI,dword ptr [EDI + 0x4c]
0041C9F1  85 FF                     TEST EDI,EDI
0041C9F3  74 14                     JZ 0x0041ca09
0041C9F5  0F AF C1                  IMUL EAX,ECX
0041C9F8  03 C7                     ADD EAX,EDI
0041C9FA  33 C9                     XOR ECX,ECX
0041C9FC  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
0041C9FF  8B C1                     MOV EAX,ECX
0041CA01  85 C0                     TEST EAX,EAX
0041CA03  0F 84 CD FD FF FF         JZ 0x0041c7d6
LAB_0041ca09:
0041CA09  5F                        POP EDI
0041CA0A  5E                        POP ESI
0041CA0B  B8 01 00 00 00            MOV EAX,0x1
0041CA10  5B                        POP EBX
0041CA11  8B E5                     MOV ESP,EBP
0041CA13  5D                        POP EBP
0041CA14  C3                        RET
