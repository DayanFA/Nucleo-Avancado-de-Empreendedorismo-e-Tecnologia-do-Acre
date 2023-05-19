import axios from 'axios';

const api = axios.create({
    baseUrl: 'https://sistemas.ufac.br/sigesc'
});

export default api;