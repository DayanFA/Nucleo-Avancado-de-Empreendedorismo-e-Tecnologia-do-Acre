import React, {useState} from 'react';
import {View, Text, TextInput, StyleSheet, Button, Alert} from 'react-native';
import {Picker} from '@react-native-picker/picker';
import api from '../Services/Api';

export default function CadastroUsuario () {
  const [Login, setLogin] = useState('');
  const [Senha, setSenha] = useState('');
  const [Email, setEmail] = useState('');
  const [Senha2, setSenha2] = useState('');
  const [Celular, setCelular] = useState('');
  const [Sexo, setSexo] = useState('');
  const [Nome, setNome] = useState('');


  
  
  function salvar(){
    var dados = new FormData();
    dados.append('Login', Login);
    dados.append('Senha', Senha);
    dados.append('Email', Email);
    dados.append('Senha2', Senha2);
    dados.append('Celular', Celular);
    dados.append('Sexo', Sexo);
    dados.append('Nome', Nome);
  
    api.post('/usuario_teste', dados,
        {headers:{'Content-Type': 'multipart/form-data'},})
    .then(function(response){
      Alert.alert('Dados salvos com sucesso')
      if(response.data.data =='true'){
        //encaminhar ele para Home
} else{
    Alert.alert ('Usuário ou senha inválido');

} 
    })
    .catch(function(error) {
      Alert.alert('ERRO');
      console.log(error.response.data);
         })

  }

return (
<View style={styles.container}>
  <TextInput
  style={styles.input}
  placeholder="Login"
  autoCorrect={false}
  autoCapitalize={false}
  value={Login}
  onChangeText={(text)=>setLogin (text)}
/>
  <TextInput
  style={styles.input}
  placeholder="Senha"
  autoCorrect={false}
  autoCapitalize={false}
  value={Senha}
  onChangeText={(text)=>setSenha (text)}
/>
<TextInput
  style={styles.input}
  placeholder="Confirmação de Senha"
  autoCorrect={false}
  autoCapitalize={false}
  value={Senha2}
  onChangeText={(text)=>setSenha2 (text)}
/>
<TextInput
  style={styles.input}
  placeholder="Nome"
  autoCorrect={false}
  autoCapitalize={false}
  value={Nome}
  onChangeText={(text)=>setNome (text)}
/>
<TextInput
  style={styles.input}
  placeholder="Email"
  autoCorrect={false}
  autoCapitalize={false}
  value={Email}
  onChangeText={(text)=>setEmail (text)}
/>
<TextInput
  style={styles.input}
  placeholder="Celular"
  autoCorrect={false}
  autoCapitalize={false}
  value={Celular}
  onChangeText={(text)=>setCelular (text)}
/>

<Picker
style={styles.input}
selectedValue={ Sexo }

onValueChange={(itemvalue,intemindex) => setSexo(itemvalue)}
>
  <Picker.Item value="M" label="Masculino" />
  <Picker.Item value="F" label="Feminino" />

</Picker>
<Button title="Salvar" onPress={()=>salvar()} />
  </View>
);
}
const styles = StyleSheet.create({
  container: {
    flex: 1,
    alignItems:'center',
    justifyContent:'center',
    backgroundColor:'#000000'
},
input:{
  background: '#80007',
  alignSelf:"center",
  width:'80%',
  height:50,
  marginTop:10,
  fontSize: 20,
  borderWidth:1,
  borderRadius:7,
}
})